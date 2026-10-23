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
                * Resource package
                */
                class Package : public AbstractModel
                {
                public:
                    Package();
                    ~Package() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppID
                     * @return AppId AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppID
                     * @param _appId AppID
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
                     * 获取Unique ID of the resource package
                     * @return PackageId Unique ID of the resource package
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置Unique ID of the resource package
                     * @param _packageId Unique ID of the resource package
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
                     * 获取Resource package name.
                     * @return PackageName Resource package name.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Resource package name.
                     * @param _packageName Resource package name.
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
                     * 获取Resource package type
CCU: compute resource package. DISK: storage resource package.
                     * @return PackageType Resource package type
CCU: compute resource package. DISK: storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource package type
CCU: compute resource package. DISK: storage resource package.
                     * @param _packageType Resource package type
CCU: compute resource package. DISK: storage resource package.
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
                     * 获取Resource package edition
base - basic, common - general, enterprise - business
                     * @return PackageVersion Resource package edition
base - basic, common - general, enterprise - business
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置Resource package edition
base - basic, common - general, enterprise - business
                     * @param _packageVersion Resource package edition
base - basic, common - general, enterprise - business
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取Region of resource package use
china: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions
                     * @return PackageRegion Region of resource package use
china: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置Region of resource package use
china: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions
                     * @param _packageRegion Region of resource package use
china: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions
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
                     * 获取Resource package status
creating
using - in use;
expired
normal_finish: used up;
apply_refund: Refund requested
refund: refunded.
                     * @return Status Resource package status
creating
using - in use;
expired
normal_finish: used up;
apply_refund: Refund requested
refund: refunded.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Resource package status
creating
using - in use;
expired
normal_finish: used up;
apply_refund: Refund requested
refund: refunded.
                     * @param _status Resource package status
creating
using - in use;
expired
normal_finish: used up;
apply_refund: Refund requested
refund: refunded.
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
                     * 获取Total resource package quantity
                     * @return PackageTotalSpec Total resource package quantity
                     * 
                     */
                    double GetPackageTotalSpec() const;

                    /**
                     * 设置Total resource package quantity
                     * @param _packageTotalSpec Total resource package quantity
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
                     * 获取Used amount of the resource package
                     * @return PackageUsedSpec Used amount of the resource package
                     * 
                     */
                    double GetPackageUsedSpec() const;

                    /**
                     * 设置Used amount of the resource package
                     * @param _packageUsedSpec Used amount of the resource package
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
                     * 获取Whether there is still inventory surplus
                     * @return HasQuota Whether there is still inventory surplus
                     * 
                     */
                    bool GetHasQuota() const;

                    /**
                     * 设置Whether there is still inventory surplus
                     * @param _hasQuota Whether there is still inventory surplus
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
                     * 获取Bound instance information
                     * @return BindInstanceInfos Bound instance information
                     * 
                     */
                    std::vector<BindInstanceInfo> GetBindInstanceInfos() const;

                    /**
                     * 设置Bound instance information
                     * @param _bindInstanceInfos Bound instance information
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
                     * 获取Effective time: 2022-07-01 00:00:00
                     * @return StartTime Effective time: 2022-07-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Effective time: 2022-07-01 00:00:00
                     * @param _startTime Effective time: 2022-07-01 00:00:00
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
                     * 获取Expiration time: 2022-08-01 00:00:00
                     * @return ExpireTime Expiration time: 2022-08-01 00:00:00
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time: 2022-08-01 00:00:00
                     * @param _expireTime Expiration time: 2022-08-01 00:00:00
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
                     * 获取Resource package historic bound (unbound) instance information
                     * @return HistoryBindResourceInfos Resource package historic bound (unbound) instance information
                     * 
                     */
                    std::vector<BindInstanceInfo> GetHistoryBindResourceInfos() const;

                    /**
                     * 设置Resource package historic bound (unbound) instance information
                     * @param _historyBindResourceInfos Resource package historic bound (unbound) instance information
                     * 
                     */
                    void SetHistoryBindResourceInfos(const std::vector<BindInstanceInfo>& _historyBindResourceInfos);

                    /**
                     * 判断参数 HistoryBindResourceInfos 是否已赋值
                     * @return HistoryBindResourceInfos 是否已赋值
                     * 
                     */
                    bool HistoryBindResourceInfosHasBeenSet() const;

                private:

                    /**
                     * AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Unique ID of the resource package
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Resource package name.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Resource package type
CCU: compute resource package. DISK: storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Resource package edition
base - basic, common - general, enterprise - business
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * Region of resource package use
china: common in the Chinese mainland; overseas: common in Hong Kong (China), Macao (China), Taiwan (China), and overseas regions
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * Resource package status
creating
using - in use;
expired
normal_finish: used up;
apply_refund: Refund requested
refund: refunded.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total resource package quantity
                     */
                    double m_packageTotalSpec;
                    bool m_packageTotalSpecHasBeenSet;

                    /**
                     * Used amount of the resource package
                     */
                    double m_packageUsedSpec;
                    bool m_packageUsedSpecHasBeenSet;

                    /**
                     * Whether there is still inventory surplus
                     */
                    bool m_hasQuota;
                    bool m_hasQuotaHasBeenSet;

                    /**
                     * Bound instance information
                     */
                    std::vector<BindInstanceInfo> m_bindInstanceInfos;
                    bool m_bindInstanceInfosHasBeenSet;

                    /**
                     * Effective time: 2022-07-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Expiration time: 2022-08-01 00:00:00
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Resource package historic bound (unbound) instance information
                     */
                    std::vector<BindInstanceInfo> m_historyBindResourceInfos;
                    bool m_historyBindResourceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGE_H_
