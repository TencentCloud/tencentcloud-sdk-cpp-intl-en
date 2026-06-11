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
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
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
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
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
                     * @return HostList Vulnerability fixing status for corresponding hosts
                     * 
                     */
                    std::vector<VulFixStatusHostInfo> GetHostList() const;

                    /**
                     * 设置Vulnerability fixing status for corresponding hosts
                     * @param _hostList Vulnerability fixing status for corresponding hosts
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
                     * @return FailCnt Number of hosts with failed vulnerability fixing
                     * 
                     */
                    uint64_t GetFailCnt() const;

                    /**
                     * 设置Number of hosts with failed vulnerability fixing
                     * @param _failCnt Number of hosts with failed vulnerability fixing
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
                     * 获取Number of successful repairs
                     * @return FixSuccessCnt Number of successful repairs
                     * 
                     */
                    uint64_t GetFixSuccessCnt() const;

                    /**
                     * 设置Number of successful repairs
                     * @param _fixSuccessCnt Number of successful repairs
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
                     * 获取Repair method. 0: Update components or install patches. 1: Disable service.
                     * @return FixMethod Repair method. 0: Update components or install patches. 1: Disable service.
                     * 
                     */
                    uint64_t GetFixMethod() const;

                    /**
                     * 设置Repair method. 0: Update components or install patches. 1: Disable service.
                     * @param _fixMethod Repair method. 0: Update components or install patches. 1: Disable service.
                     * 
                     */
                    void SetFixMethod(const uint64_t& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取kb ID
                     * @return KbId kb ID
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置kb ID
                     * @param _kbId kb ID
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取kb number
                     * @return KbNumber kb number
                     * 
                     */
                    std::string GetKbNumber() const;

                    /**
                     * 设置kb number
                     * @param _kbNumber kb number
                     * 
                     */
                    void SetKbNumber(const std::string& _kbNumber);

                    /**
                     * 判断参数 KbNumber 是否已赋值
                     * @return KbNumber 是否已赋值
                     * 
                     */
                    bool KbNumberHasBeenSet() const;

                    /**
                     * 获取kb name
                     * @return KbName kb name
                     * 
                     */
                    std::string GetKbName() const;

                    /**
                     * 设置kb name
                     * @param _kbName kb name
                     * 
                     */
                    void SetKbName(const std::string& _kbName);

                    /**
                     * 判断参数 KbName 是否已赋值
                     * @return KbName 是否已赋值
                     * 
                     */
                    bool KbNameHasBeenSet() const;

                    /**
                     * 获取Pre kb list
                     * @return PreKbList Pre kb list
                     * 
                     */
                    std::vector<std::string> GetPreKbList() const;

                    /**
                     * 设置Pre kb list
                     * @param _preKbList Pre kb list
                     * 
                     */
                    void SetPreKbList(const std::vector<std::string>& _preKbList);

                    /**
                     * 判断参数 PreKbList 是否已赋值
                     * @return PreKbList 是否已赋值
                     * 
                     */
                    bool PreKbListHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
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
                     */
                    std::vector<VulFixStatusHostInfo> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * Number of hosts with failed vulnerability fixing
                     */
                    uint64_t m_failCnt;
                    bool m_failCntHasBeenSet;

                    /**
                     * Number of successful repairs
                     */
                    uint64_t m_fixSuccessCnt;
                    bool m_fixSuccessCntHasBeenSet;

                    /**
                     * Repair method. 0: Update components or install patches. 1: Disable service.
                     */
                    uint64_t m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * kb ID
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * kb number
                     */
                    std::string m_kbNumber;
                    bool m_kbNumberHasBeenSet;

                    /**
                     * kb name
                     */
                    std::string m_kbName;
                    bool m_kbNameHasBeenSet;

                    /**
                     * Pre kb list
                     */
                    std::vector<std::string> m_preKbList;
                    bool m_preKbListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSINFO_H_
