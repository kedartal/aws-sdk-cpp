﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/EC2InstanceDetails.h>
#include <aws/ce/model/RDSInstanceDetails.h>
#include <aws/ce/model/RedshiftInstanceDetails.h>
#include <aws/ce/model/ElastiCacheInstanceDetails.h>
#include <aws/ce/model/ESInstanceDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details about the instances that Amazon Web Services recommends that you
   * purchase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/InstanceDetails">AWS
   * API Reference</a></p>
   */
  class InstanceDetails
  {
  public:
    AWS_COSTEXPLORER_API InstanceDetails();
    AWS_COSTEXPLORER_API InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const EC2InstanceDetails& GetEC2InstanceDetails() const{ return m_eC2InstanceDetails; }

    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool EC2InstanceDetailsHasBeenSet() const { return m_eC2InstanceDetailsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetEC2InstanceDetails(const EC2InstanceDetails& value) { m_eC2InstanceDetailsHasBeenSet = true; m_eC2InstanceDetails = value; }

    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetEC2InstanceDetails(EC2InstanceDetails&& value) { m_eC2InstanceDetailsHasBeenSet = true; m_eC2InstanceDetails = std::move(value); }

    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithEC2InstanceDetails(const EC2InstanceDetails& value) { SetEC2InstanceDetails(value); return *this;}

    /**
     * <p>The Amazon EC2 instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithEC2InstanceDetails(EC2InstanceDetails&& value) { SetEC2InstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const RDSInstanceDetails& GetRDSInstanceDetails() const{ return m_rDSInstanceDetails; }

    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool RDSInstanceDetailsHasBeenSet() const { return m_rDSInstanceDetailsHasBeenSet; }

    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetRDSInstanceDetails(const RDSInstanceDetails& value) { m_rDSInstanceDetailsHasBeenSet = true; m_rDSInstanceDetails = value; }

    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetRDSInstanceDetails(RDSInstanceDetails&& value) { m_rDSInstanceDetailsHasBeenSet = true; m_rDSInstanceDetails = std::move(value); }

    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithRDSInstanceDetails(const RDSInstanceDetails& value) { SetRDSInstanceDetails(value); return *this;}

    /**
     * <p>The Amazon RDS instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithRDSInstanceDetails(RDSInstanceDetails&& value) { SetRDSInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const RedshiftInstanceDetails& GetRedshiftInstanceDetails() const{ return m_redshiftInstanceDetails; }

    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool RedshiftInstanceDetailsHasBeenSet() const { return m_redshiftInstanceDetailsHasBeenSet; }

    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetRedshiftInstanceDetails(const RedshiftInstanceDetails& value) { m_redshiftInstanceDetailsHasBeenSet = true; m_redshiftInstanceDetails = value; }

    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetRedshiftInstanceDetails(RedshiftInstanceDetails&& value) { m_redshiftInstanceDetailsHasBeenSet = true; m_redshiftInstanceDetails = std::move(value); }

    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithRedshiftInstanceDetails(const RedshiftInstanceDetails& value) { SetRedshiftInstanceDetails(value); return *this;}

    /**
     * <p>The Amazon Redshift instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithRedshiftInstanceDetails(RedshiftInstanceDetails&& value) { SetRedshiftInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline const ElastiCacheInstanceDetails& GetElastiCacheInstanceDetails() const{ return m_elastiCacheInstanceDetails; }

    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline bool ElastiCacheInstanceDetailsHasBeenSet() const { return m_elastiCacheInstanceDetailsHasBeenSet; }

    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetElastiCacheInstanceDetails(const ElastiCacheInstanceDetails& value) { m_elastiCacheInstanceDetailsHasBeenSet = true; m_elastiCacheInstanceDetails = value; }

    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline void SetElastiCacheInstanceDetails(ElastiCacheInstanceDetails&& value) { m_elastiCacheInstanceDetailsHasBeenSet = true; m_elastiCacheInstanceDetails = std::move(value); }

    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithElastiCacheInstanceDetails(const ElastiCacheInstanceDetails& value) { SetElastiCacheInstanceDetails(value); return *this;}

    /**
     * <p>The ElastiCache instances that Amazon Web Services recommends that you
     * purchase.</p>
     */
    inline InstanceDetails& WithElastiCacheInstanceDetails(ElastiCacheInstanceDetails&& value) { SetElastiCacheInstanceDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline const ESInstanceDetails& GetESInstanceDetails() const{ return m_eSInstanceDetails; }

    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline bool ESInstanceDetailsHasBeenSet() const { return m_eSInstanceDetailsHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline void SetESInstanceDetails(const ESInstanceDetails& value) { m_eSInstanceDetailsHasBeenSet = true; m_eSInstanceDetails = value; }

    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline void SetESInstanceDetails(ESInstanceDetails&& value) { m_eSInstanceDetailsHasBeenSet = true; m_eSInstanceDetails = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline InstanceDetails& WithESInstanceDetails(const ESInstanceDetails& value) { SetESInstanceDetails(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service instances that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline InstanceDetails& WithESInstanceDetails(ESInstanceDetails&& value) { SetESInstanceDetails(std::move(value)); return *this;}

  private:

    EC2InstanceDetails m_eC2InstanceDetails;
    bool m_eC2InstanceDetailsHasBeenSet = false;

    RDSInstanceDetails m_rDSInstanceDetails;
    bool m_rDSInstanceDetailsHasBeenSet = false;

    RedshiftInstanceDetails m_redshiftInstanceDetails;
    bool m_redshiftInstanceDetailsHasBeenSet = false;

    ElastiCacheInstanceDetails m_elastiCacheInstanceDetails;
    bool m_elastiCacheInstanceDetailsHasBeenSet = false;

    ESInstanceDetails m_eSInstanceDetails;
    bool m_eSInstanceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
