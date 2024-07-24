/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Options.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SyncDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Sync task information
                */
                class SyncJobInfo : public AbstractModel
                {
                public:
                    SyncJobInfo();
                    ~SyncJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sync task ID, such as `sync-btso140`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Sync task ID, such as `sync-btso140`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Sync task ID, such as `sync-btso140`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId Sync task ID, such as `sync-btso140`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Sync task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobName Sync task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Sync task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobName Sync task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `PostPay` (pay-as-you-go); `PrePay` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode. Valid values: `PostPay` (pay-as-you-go); `PrePay` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values: `PostPay` (pay-as-you-go); `PrePay` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode. Valid values: `PostPay` (pay-as-you-go); `PrePay` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunMode Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runMode Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Expected execution time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectRunTime Expected execution time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置Expected execution time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expectRunTime Expected execution time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取All supported operations
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllActions All supported operations
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllActions() const;

                    /**
                     * 设置All supported operations
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allActions All supported operations
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllActions(const std::vector<std::string>& _allActions);

                    /**
                     * 判断参数 AllActions 是否已赋值
                     * @return AllActions 是否已赋值
                     * 
                     */
                    bool AllActionsHasBeenSet() const;

                    /**
                     * 获取Operations that can be performed under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Actions Operations that can be performed under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置Operations that can be performed under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actions Operations that can be performed under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取Sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Options Sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Options GetOptions() const;

                    /**
                     * 设置Sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _options Sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取Sync database/table objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Objects Sync database/table objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置Sync database/table objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objects Sync database/table objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Task specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Specification Task specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置Task specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specification Task specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取Expiration time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Source database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcRegion Source database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置Source database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcRegion Source database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcAccessType Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcAccessType Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     * 
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Source database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcInfo Source database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置Source database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcInfo Source database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Valid values: `cluster`, `single`. `single`: For single-node source databases; `cluster`: For multi-node source databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcNodeType Valid values: `cluster`, `single`. `single`: For single-node source databases; `cluster`: For multi-node source databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置Valid values: `cluster`, `single`. `single`: For single-node source databases; `cluster`: For multi-node source databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcNodeType Valid values: `cluster`, `single`. `single`: For single-node source databases; `cluster`: For multi-node source databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     * 
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取Source database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcInfos Source database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置Source database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcInfos Source database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInfos(const SyncDBEndpointInfos& _srcInfos);

                    /**
                     * 判断参数 SrcInfos 是否已赋值
                     * @return SrcInfos 是否已赋值
                     * 
                     */
                    bool SrcInfosHasBeenSet() const;

                    /**
                     * 获取Target database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstRegion Target database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置Target database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstRegion Target database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstAccessType Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstAccessType Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     * 
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Target database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstInfo Target database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置Target database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstInfo Target database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Valid values: `cluster`, `single`. `single`: For single-node target databases; `cluster`: For multi-node target databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstNodeType Valid values: `cluster`, `single`. `single`: For single-node target databases; `cluster`: For multi-node target databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstNodeType() const;

                    /**
                     * 设置Valid values: `cluster`, `single`. `single`: For single-node target databases; `cluster`: For multi-node target databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstNodeType Valid values: `cluster`, `single`. `single`: For single-node target databases; `cluster`: For multi-node target databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstNodeType(const std::string& _dstNodeType);

                    /**
                     * 判断参数 DstNodeType 是否已赋值
                     * @return DstNodeType 是否已赋值
                     * 
                     */
                    bool DstNodeTypeHasBeenSet() const;

                    /**
                     * 获取Target database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstInfos Target database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置Target database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstInfos Target database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstInfos(const SyncDBEndpointInfos& _dstInfos);

                    /**
                     * 判断参数 DstInfos 是否已赋值
                     * @return DstInfos 是否已赋值
                     * 
                     */
                    bool DstInfosHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `UnInitialized`, `Initialized`, `Checking`, `CheckPass`, `CheckNotPass`, `ReadyRunning`, `Running`, `Pausing`, `Paused`, `Stopping`, `Stopped`, `ResumableErr`, `Resuming`, `Failed`, `Released`, `Resetting`, `Unknown`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Valid values: `UnInitialized`, `Initialized`, `Checking`, `CheckPass`, `CheckNotPass`, `ReadyRunning`, `Running`, `Pausing`, `Paused`, `Stopping`, `Stopped`, `ResumableErr`, `Resuming`, `Failed`, `Released`, `Resetting`, `Unknown`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: `UnInitialized`, `Initialized`, `Checking`, `CheckPass`, `CheckNotPass`, `ReadyRunning`, `Running`, `Pausing`, `Paused`, `Stopping`, `Stopped`, `ResumableErr`, `Resuming`, `Failed`, `Released`, `Resetting`, `Unknown`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task status. Valid values: `UnInitialized`, `Initialized`, `Checking`, `CheckPass`, `CheckNotPass`, `ReadyRunning`, `Running`, `Pausing`, `Paused`, `Stopping`, `Stopped`, `ResumableErr`, `Resuming`, `Failed`, `Released`, `Resetting`, `Unknown`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取End time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Step information of the sync task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Detail Step information of the sync task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置Step information of the sync task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detail Step information of the sync task
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Billing status. Valid values: `Normal`, `Resizing`, `Renewing`, `Isolating`, `Isolated`, `Offlining`, `Offlined`, `NotBilled`, `Recovering`, `PostPay2Prepaying`, `PrePay2Postpaying`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TradeStatus Billing status. Valid values: `Normal`, `Resizing`, `Renewing`, `Isolating`, `Isolated`, `Offlining`, `Offlined`, `NotBilled`, `Recovering`, `PostPay2Prepaying`, `PrePay2Postpaying`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置Billing status. Valid values: `Normal`, `Resizing`, `Renewing`, `Isolating`, `Isolated`, `Offlining`, `Offlined`, `NotBilled`, `Recovering`, `PostPay2Prepaying`, `PrePay2Postpaying`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tradeStatus Billing status. Valid values: `Normal`, `Resizing`, `Renewing`, `Isolating`, `Isolated`, `Offlining`, `Offlined`, `NotBilled`, `Recovering`, `PostPay2Prepaying`, `PrePay2Postpaying`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取Sync link specification, such as `micro`, `small`, `medium`, and `large`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceClass Sync link specification, such as `micro`, `small`, `medium`, and `large`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置Sync link specification, such as `micro`, `small`, `medium`, and `large`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceClass Sync link specification, such as `micro`, `small`, `medium`, and `large`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenew Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRenew Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Deletion time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Deletion time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Deletion time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _offlineTime Deletion time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Settings of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRetryTimeRangeMinutes Settings of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置Settings of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRetryTimeRangeMinutes Settings of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DumperResumeCtrl Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 设置Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dumperResumeCtrl Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDumperResumeCtrl(const std::string& _dumperResumeCtrl);

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                private:

                    /**
                     * Sync task ID, such as `sync-btso140`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Sync task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Billing mode. Valid values: `PostPay` (pay-as-you-go); `PrePay` (monthly subscription).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Expected execution time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * All supported operations
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allActions;
                    bool m_allActionsHasBeenSet;

                    /**
                     * Operations that can be performed under the current status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * Sync options
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * Sync database/table objects
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Task specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * Expiration time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Source database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Source database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Valid values: `cluster`, `single`. `single`: For single-node source databases; `cluster`: For multi-node source databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * Source database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * Target database region, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Target database information. This parameter is used by single-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Valid values: `cluster`, `single`. `single`: For single-node target databases; `cluster`: For multi-node target databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * Target database information. This parameter is used for multi-node databases.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * Creation time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task status. Valid values: `UnInitialized`, `Initialized`, `Checking`, `CheckPass`, `CheckNotPass`, `ReadyRunning`, `Running`, `Pausing`, `Paused`, `Stopping`, `Stopped`, `ResumableErr`, `Resuming`, `Failed`, `Released`, `Resetting`, `Unknown`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * End time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Step information of the sync task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Billing status. Valid values: `Normal`, `Resizing`, `Renewing`, `Isolating`, `Isolated`, `Offlining`, `Offlined`, `NotBilled`, `Recovering`, `PostPay2Prepaying`, `PrePay2Postpaying`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * Sync link specification, such as `micro`, `small`, `medium`, and `large`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Deletion time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Settings of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCJOBINFO_H_
