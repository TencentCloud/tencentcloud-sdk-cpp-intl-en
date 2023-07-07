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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BindInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Resource pack
                */
                class Package : public AbstractModel
                {
                public:
                    Package();
                    ~Package() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppID Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId AppID Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppID Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId AppID Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageId The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageId The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Resource pack name Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageName Resource pack name Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Resource pack name Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageName Resource pack name Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageType Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageRegion Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageRegion(const std::string& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取Resource pack status. Valid values: `creating`, `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded). 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Status Resource pack status. Valid values: `creating`, `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded). 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Resource pack status. Valid values: `creating`, `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded). 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _status Resource pack status. Valid values: `creating`, `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded). 
Note:  This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total number of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageTotalSpec Total number of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetPackageTotalSpec() const;

                    /**
                     * 设置Total number of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageTotalSpec Total number of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageTotalSpec(const double& _packageTotalSpec);

                    /**
                     * 判断参数 PackageTotalSpec 是否已赋值
                     * @return PackageTotalSpec 是否已赋值
                     * 
                     */
                    bool PackageTotalSpecHasBeenSet() const;

                    /**
                     * 获取Consumed usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageUsedSpec Consumed usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetPackageUsedSpec() const;

                    /**
                     * 设置Consumed usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageUsedSpec Consumed usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageUsedSpec(const double& _packageUsedSpec);

                    /**
                     * 判断参数 PackageUsedSpec 是否已赋值
                     * @return PackageUsedSpec 是否已赋值
                     * 
                     */
                    bool PackageUsedSpecHasBeenSet() const;

                    /**
                     * 获取Remaining usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasQuota Remaining usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasQuota() const;

                    /**
                     * 设置Remaining usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasQuota Remaining usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasQuota(const bool& _hasQuota);

                    /**
                     * 判断参数 HasQuota 是否已赋值
                     * @return HasQuota 是否已赋值
                     * 
                     */
                    bool HasQuotaHasBeenSet() const;

                    /**
                     * 获取Information of the instance bound Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindInstanceInfos Information of the instance bound Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BindInstanceInfo> GetBindInstanceInfos() const;

                    /**
                     * 设置Information of the instance bound Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindInstanceInfos Information of the instance bound Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindInstanceInfos(const std::vector<BindInstanceInfo>& _bindInstanceInfos);

                    /**
                     * 判断参数 BindInstanceInfos 是否已赋值
                     * @return BindInstanceInfos 是否已赋值
                     * 
                     */
                    bool BindInstanceInfosHasBeenSet() const;

                    /**
                     * 获取Validity time:  2022-07-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Validity time:  2022-07-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Validity time:  2022-07-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Validity time:  2022-07-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Validity time:  2022-08-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Validity time:  2022-08-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Validity time:  2022-08-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Validity time:  2022-08-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * AppID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Resource pack name Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Resource pack type. Valid values: `CCU` (compute resource pack), `DISK` (storage resource pack). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Region of the resource pack. Valid values: `China` (Chinese mainland), `overseas` (outside Chinese mainland). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource pack status. Valid values: `creating`, `using`, `expired`, `normal_finish` (used up), `apply_refund` (requesting a refund), `refund` (refunded). 
Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total number of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_packageTotalSpec;
                    bool m_packageTotalSpecHasBeenSet;

                    /**
                     * Consumed usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_packageUsedSpec;
                    bool m_packageUsedSpecHasBeenSet;

                    /**
                     * Remaining usage of resource packs Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasQuota;
                    bool m_hasQuotaHasBeenSet;

                    /**
                     * Information of the instance bound Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BindInstanceInfo> m_bindInstanceInfos;
                    bool m_bindInstanceInfosHasBeenSet;

                    /**
                     * Validity time:  2022-07-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Validity time:  2022-08-01 00:00:00 Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_
