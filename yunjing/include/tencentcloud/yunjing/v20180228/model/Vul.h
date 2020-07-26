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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Vulnerability list data
                */
                class Vul : public AbstractModel
                {
                public:
                    Vul();
                    ~Vul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability category ID
                     * @return VulId Vulnerability category ID
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability category ID
                     * @param VulId Vulnerability category ID
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param VulName Vulnerability name
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability severity level:
HIGH: high
MIDDLE: medium
LOW: low
NOTICE: notice
                     * @return VulLevel Vulnerability severity level:
HIGH: high
MIDDLE: medium
LOW: low
NOTICE: notice
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 设置Vulnerability severity level:
HIGH: high
MIDDLE: medium
LOW: low
NOTICE: notice
                     * @param VulLevel Vulnerability severity level:
HIGH: high
MIDDLE: medium
LOW: low
NOTICE: notice
                     */
                    void SetVulLevel(const std::string& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取Last scanned time
                     * @return LastScanTime Last scanned time
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scanned time
                     * @param LastScanTime Last scanned time
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Number of affected servers
                     * @return ImpactedHostNum Number of affected servers
                     */
                    uint64_t GetImpactedHostNum() const;

                    /**
                     * 设置Number of affected servers
                     * @param ImpactedHostNum Number of affected servers
                     */
                    void SetImpactedHostNum(const uint64_t& _impactedHostNum);

                    /**
                     * 判断参数 ImpactedHostNum 是否已赋值
                     * @return ImpactedHostNum 是否已赋值
                     */
                    bool ImpactedHostNumHasBeenSet() const;

                    /**
                     * 获取Vulnerability status
* UN_OPERATED: to be processed
* FIXED: fixed
                     * @return VulStatus Vulnerability status
* UN_OPERATED: to be processed
* FIXED: fixed
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置Vulnerability status
* UN_OPERATED: to be processed
* FIXED: fixed
                     * @param VulStatus Vulnerability status
* UN_OPERATED: to be processed
* FIXED: fixed
                     */
                    void SetVulStatus(const std::string& _vulStatus);

                    /**
                     * 判断参数 VulStatus 是否已赋值
                     * @return VulStatus 是否已赋值
                     */
                    bool VulStatusHasBeenSet() const;

                private:

                    /**
                     * Vulnerability category ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability severity level:
HIGH: high
MIDDLE: medium
LOW: low
NOTICE: notice
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * Last scanned time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Number of affected servers
                     */
                    uint64_t m_impactedHostNum;
                    bool m_impactedHostNumHasBeenSet;

                    /**
                     * Vulnerability status
* UN_OPERATED: to be processed
* FIXED: fixed
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_
