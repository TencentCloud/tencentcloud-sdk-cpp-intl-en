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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateVulScanManual request structure.
                */
                class CreateVulScanManualRequest : public AbstractModel
                {
                public:
                    CreateVulScanManualRequest();
                    ~CreateVulScanManualRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Timeout period (seconds)</p>
                     * @return Timeout <p>Timeout period (seconds)</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout period (seconds)</p>
                     * @param _timeout <p>Timeout period (seconds)</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Asset scope (0-all assets, 1-Custom assets, 2-remove asset, 3-automatic asset match)</p>
                     * @return AssetRange <p>Asset scope (0-all assets, 1-Custom assets, 2-remove asset, 3-automatic asset match)</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>Asset scope (0-all assets, 1-Custom assets, 2-remove asset, 3-automatic asset match)</p>
                     * @param _assetRange <p>Asset scope (0-all assets, 1-Custom assets, 2-remove asset, 3-automatic asset match)</p>
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * @return Method <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * 
                     */
                    std::vector<std::string> GetMethod() const;

                    /**
                     * 设置<p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * @param _method <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     * 
                     */
                    void SetMethod(const std::vector<std::string>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability id</p>
                     * @return VulId <p>Vulnerability id</p>
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 设置<p>Vulnerability id</p>
                     * @param _vulId <p>Vulnerability id</p>
                     * 
                     */
                    void SetVulId(const std::vector<uint64_t>& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>kb No.</p>
                     * @return KbNo <p>kb No.</p>
                     * 
                     */
                    std::vector<std::string> GetKbNo() const;

                    /**
                     * 设置<p>kb No.</p>
                     * @param _kbNo <p>kb No.</p>
                     * 
                     */
                    void SetKbNo(const std::vector<std::string>& _kbNo);

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability scan type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @return VulCategory <p>Vulnerability scan type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>Vulnerability scan type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * @param _vulCategory <p>Vulnerability scan type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability level (INVALID: Invalid, INFO: Notification, LOW: Low risk, MEDIUM: Medium risk, HIGH: High risk, CRITICAL: Critical)</p>
                     * @return Level <p>Vulnerability level (INVALID: Invalid, INFO: Notification, LOW: Low risk, MEDIUM: Medium risk, HIGH: High risk, CRITICAL: Critical)</p>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>Vulnerability level (INVALID: Invalid, INFO: Notification, LOW: Low risk, MEDIUM: Medium risk, HIGH: High risk, CRITICAL: Critical)</p>
                     * @param _level <p>Vulnerability level (INVALID: Invalid, INFO: Notification, LOW: Low risk, MEDIUM: Medium risk, HIGH: High risk, CRITICAL: Critical)</p>
                     * 
                     */
                    void SetLevel(const std::vector<std::string>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>Asset list (UUID list)</p>
                     * @return AssetList <p>Asset list (UUID list)</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>Asset list (UUID list)</p>
                     * @param _assetList <p>Asset list (UUID list)</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>Tag id</p>
                     * @return TagIds <p>Tag id</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>Tag id</p>
                     * @param _tagIds <p>Tag id</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Timeout period (seconds)</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Asset scope (0-all assets, 1-Custom assets, 2-remove asset, 3-automatic asset match)</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>Scanning method (VersionCompare: version comparison, POC: POC detection, VersionComparePOC: version comparison + POC detection)</p>
                     */
                    std::vector<std::string> m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Vulnerability id</p>
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>kb No.</p>
                     */
                    std::vector<std::string> m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * <p>Vulnerability scan type</p><p>Enumeration value:</p><ul><li>LINUX: Linux software vulnerability</li><li>WINDOWS: Windows system patch</li><li>WEB_CMS: Web-CMS vulnerability</li><li>APPLICATION: Application vulnerability</li><li>EMERGENCY: Emergency vulnerability</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>Vulnerability level (INVALID: Invalid, INFO: Notification, LOW: Low risk, MEDIUM: Medium risk, HIGH: High risk, CRITICAL: Critical)</p>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Asset list (UUID list)</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>Tag id</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_
