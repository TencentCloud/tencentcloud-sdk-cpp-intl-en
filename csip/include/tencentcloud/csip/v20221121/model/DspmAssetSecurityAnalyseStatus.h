/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm asset security analysis status
                */
                class DspmAssetSecurityAnalyseStatus : public AbstractModel
                {
                public:
                    DspmAssetSecurityAnalyseStatus();
                    ~DspmAssetSecurityAnalyseStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取app id of the asset owner account
                     * @return AppId app id of the asset owner account
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置app id of the asset owner account
                     * @param _appId app id of the asset owner account
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Asset instance ID.
                     * @return AssetId Asset instance ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset instance ID.
                     * @param _assetId Asset instance ID.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Whether sensitive data identification is supported. 0: no support; 1: support
                     * @return IdentifyScanSupported Whether sensitive data identification is supported. 0: no support; 1: support
                     * 
                     */
                    int64_t GetIdentifyScanSupported() const;

                    /**
                     * 设置Whether sensitive data identification is supported. 0: no support; 1: support
                     * @param _identifyScanSupported Whether sensitive data identification is supported. 0: no support; 1: support
                     * 
                     */
                    void SetIdentifyScanSupported(const int64_t& _identifyScanSupported);

                    /**
                     * 判断参数 IdentifyScanSupported 是否已赋值
                     * @return IdentifyScanSupported 是否已赋值
                     * 
                     */
                    bool IdentifyScanSupportedHasBeenSet() const;

                    /**
                     * 获取Whether log shipping is supported. 0: unsupported; 1: supported
                     * @return LogDeliverySupported Whether log shipping is supported. 0: unsupported; 1: supported
                     * 
                     */
                    int64_t GetLogDeliverySupported() const;

                    /**
                     * 设置Whether log shipping is supported. 0: unsupported; 1: supported
                     * @param _logDeliverySupported Whether log shipping is supported. 0: unsupported; 1: supported
                     * 
                     */
                    void SetLogDeliverySupported(const int64_t& _logDeliverySupported);

                    /**
                     * 判断参数 LogDeliverySupported 是否已赋值
                     * @return LogDeliverySupported 是否已赋值
                     * 
                     */
                    bool LogDeliverySupportedHasBeenSet() const;

                    /**
                     * 获取Security analysis status (0: Off, 1: On, 2: Activating, 3: Disabling)

                     * @return SecurityAnalyseStatus Security analysis status (0: Off, 1: On, 2: Activating, 3: Disabling)

                     * 
                     */
                    int64_t GetSecurityAnalyseStatus() const;

                    /**
                     * 设置Security analysis status (0: Off, 1: On, 2: Activating, 3: Disabling)

                     * @param _securityAnalyseStatus Security analysis status (0: Off, 1: On, 2: Activating, 3: Disabling)

                     * 
                     */
                    void SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus);

                    /**
                     * 判断参数 SecurityAnalyseStatus 是否已赋值
                     * @return SecurityAnalyseStatus 是否已赋值
                     * 
                     */
                    bool SecurityAnalyseStatusHasBeenSet() const;

                    /**
                     * 获取Log delivery status.
0: shipping disabled; 1: shipping enabled; 2: shipping activating; 3: shipping disabling
                     * @return LogDeliveryStatus Log delivery status.
0: shipping disabled; 1: shipping enabled; 2: shipping activating; 3: shipping disabling
                     * 
                     */
                    int64_t GetLogDeliveryStatus() const;

                    /**
                     * 设置Log delivery status.
0: shipping disabled; 1: shipping enabled; 2: shipping activating; 3: shipping disabling
                     * @param _logDeliveryStatus Log delivery status.
0: shipping disabled; 1: shipping enabled; 2: shipping activating; 3: shipping disabling
                     * 
                     */
                    void SetLogDeliveryStatus(const int64_t& _logDeliveryStatus);

                    /**
                     * 判断参数 LogDeliveryStatus 是否已赋值
                     * @return LogDeliveryStatus 是否已赋值
                     * 
                     */
                    bool LogDeliveryStatusHasBeenSet() const;

                    /**
                     * 获取The causes for the log audit being forbidden to enable. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled
                     * @return LogDeliveryDisableReason The causes for the log audit being forbidden to enable. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled
                     * 
                     */
                    std::string GetLogDeliveryDisableReason() const;

                    /**
                     * 设置The causes for the log audit being forbidden to enable. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled
                     * @param _logDeliveryDisableReason The causes for the log audit being forbidden to enable. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled
                     * 
                     */
                    void SetLogDeliveryDisableReason(const std::string& _logDeliveryDisableReason);

                    /**
                     * 判断参数 LogDeliveryDisableReason 是否已赋值
                     * @return LogDeliveryDisableReason 是否已赋值
                     * 
                     */
                    bool LogDeliveryDisableReasonHasBeenSet() const;

                    /**
                     * 获取Total number of logs for the current instance.
                     * @return TotalAuditLogs Total number of logs for the current instance.
                     * 
                     */
                    uint64_t GetTotalAuditLogs() const;

                    /**
                     * 设置Total number of logs for the current instance.
                     * @param _totalAuditLogs Total number of logs for the current instance.
                     * 
                     */
                    void SetTotalAuditLogs(const uint64_t& _totalAuditLogs);

                    /**
                     * 判断参数 TotalAuditLogs 是否已赋值
                     * @return TotalAuditLogs 是否已赋值
                     * 
                     */
                    bool TotalAuditLogsHasBeenSet() const;

                    /**
                     * 获取Number of recognized sensitive data items
                     * @return DataScanDetailRuleCount Number of recognized sensitive data items
                     * 
                     */
                    uint64_t GetDataScanDetailRuleCount() const;

                    /**
                     * 设置Number of recognized sensitive data items
                     * @param _dataScanDetailRuleCount Number of recognized sensitive data items
                     * 
                     */
                    void SetDataScanDetailRuleCount(const uint64_t& _dataScanDetailRuleCount);

                    /**
                     * 判断参数 DataScanDetailRuleCount 是否已赋值
                     * @return DataScanDetailRuleCount 是否已赋值
                     * 
                     */
                    bool DataScanDetailRuleCountHasBeenSet() const;

                    /**
                     * 获取Operation error information
                     * @return OperationErrorMsg Operation error information
                     * 
                     */
                    std::string GetOperationErrorMsg() const;

                    /**
                     * 设置Operation error information
                     * @param _operationErrorMsg Operation error information
                     * 
                     */
                    void SetOperationErrorMsg(const std::string& _operationErrorMsg);

                    /**
                     * 判断参数 OperationErrorMsg 是否已赋值
                     * @return OperationErrorMsg 是否已赋值
                     * 
                     */
                    bool OperationErrorMsgHasBeenSet() const;

                private:

                    /**
                     * app id of the asset owner account
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Asset instance ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Whether sensitive data identification is supported. 0: no support; 1: support
                     */
                    int64_t m_identifyScanSupported;
                    bool m_identifyScanSupportedHasBeenSet;

                    /**
                     * Whether log shipping is supported. 0: unsupported; 1: supported
                     */
                    int64_t m_logDeliverySupported;
                    bool m_logDeliverySupportedHasBeenSet;

                    /**
                     * Security analysis status (0: Off, 1: On, 2: Activating, 3: Disabling)

                     */
                    int64_t m_securityAnalyseStatus;
                    bool m_securityAnalyseStatusHasBeenSet;

                    /**
                     * Log delivery status.
0: shipping disabled; 1: shipping enabled; 2: shipping activating; 3: shipping disabling
                     */
                    int64_t m_logDeliveryStatus;
                    bool m_logDeliveryStatusHasBeenSet;

                    /**
                     * The causes for the log audit being forbidden to enable. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled
                     */
                    std::string m_logDeliveryDisableReason;
                    bool m_logDeliveryDisableReasonHasBeenSet;

                    /**
                     * Total number of logs for the current instance.
                     */
                    uint64_t m_totalAuditLogs;
                    bool m_totalAuditLogsHasBeenSet;

                    /**
                     * Number of recognized sensitive data items
                     */
                    uint64_t m_dataScanDetailRuleCount;
                    bool m_dataScanDetailRuleCountHasBeenSet;

                    /**
                     * Operation error information
                     */
                    std::string m_operationErrorMsg;
                    bool m_operationErrorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_
