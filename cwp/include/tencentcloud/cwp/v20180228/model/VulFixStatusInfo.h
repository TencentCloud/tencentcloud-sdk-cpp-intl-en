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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulFixStatusHostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * View vulnerability fixing details
                */
                class VulFixStatusInfo : public AbstractModel
                {
                public:
                    VulFixStatusInfo();
                    ~VulFixStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulId Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulId Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability fixing progress: 1-100;
                     * @return Progress Vulnerability fixing progress: 1-100;
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Vulnerability fixing progress: 1-100;
                     * @param _progress Vulnerability fixing progress: 1-100;
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Vulnerability fixing status for corresponding hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostList Vulnerability fixing status for corresponding hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VulFixStatusHostInfo> GetHostList() const;

                    /**
                     * 设置Vulnerability fixing status for corresponding hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostList Vulnerability fixing status for corresponding hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostList(const std::vector<VulFixStatusHostInfo>& _hostList);

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取Number of hosts with failed vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailCnt Number of hosts with failed vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFailCnt() const;

                    /**
                     * 设置Number of hosts with failed vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failCnt Number of hosts with failed vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailCnt(const uint64_t& _failCnt);

                    /**
                     * 判断参数 FailCnt 是否已赋值
                     * @return FailCnt 是否已赋值
                     * 
                     */
                    bool FailCntHasBeenSet() const;

                    /**
                     * 获取Number of hosts with successful vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FixSuccessCnt Number of hosts with successful vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFixSuccessCnt() const;

                    /**
                     * 设置Number of hosts with successful vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fixSuccessCnt Number of hosts with successful vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFixSuccessCnt(const uint64_t& _fixSuccessCnt);

                    /**
                     * 判断参数 FixSuccessCnt 是否已赋值
                     * @return FixSuccessCnt 是否已赋值
                     * 
                     */
                    bool FixSuccessCntHasBeenSet() const;

                    /**
                     * 获取
                     * @return FixMethod 
                     * 
                     */
                    uint64_t GetFixMethod() const;

                    /**
                     * 设置
                     * @param _fixMethod 
                     * 
                     */
                    void SetFixMethod(const uint64_t& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability fixing progress: 1-100;
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Vulnerability fixing status for corresponding hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VulFixStatusHostInfo> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * Number of hosts with failed vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_failCnt;
                    bool m_failCntHasBeenSet;

                    /**
                     * Number of hosts with successful vulnerability fixing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fixSuccessCnt;
                    bool m_fixSuccessCntHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_
