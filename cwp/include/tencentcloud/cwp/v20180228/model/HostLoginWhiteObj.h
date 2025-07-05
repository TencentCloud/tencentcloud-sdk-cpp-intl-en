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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINWHITEOBJ_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINWHITEOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Place.h>
#include <tencentcloud/cwp/v20180228/model/HostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Add log-in audit allowlist entity
                */
                class HostLoginWhiteObj : public AbstractModel
                {
                public:
                    HostLoginWhiteObj();
                    ~HostLoginWhiteObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowlisted region
                     * @return Places Allowlisted region
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Allowlisted region
                     * @param _places Allowlisted region
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.
                     * @return SrcIp Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.
                     * @param _srcIp Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Allowlisted username separated by commas
                     * @return UserName Allowlisted username separated by commas
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Allowlisted username separated by commas
                     * @param _userName Allowlisted username separated by commas
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Whether the allowlist is effective globally. 1: all hosts; 0: only a single host.
                     * @return IsGlobal Whether the allowlist is effective globally. 1: all hosts; 0: only a single host.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the allowlist is effective globally. 1: all hosts; 0: only a single host.
                     * @param _isGlobal Whether the allowlist is effective globally. 1: all hosts; 0: only a single host.
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取List of information on machines where the allowlist is effective
                     * @return HostInfos List of information on machines where the allowlist is effective
                     * 
                     */
                    std::vector<HostInfo> GetHostInfos() const;

                    /**
                     * 设置List of information on machines where the allowlist is effective
                     * @param _hostInfos List of information on machines where the allowlist is effective
                     * 
                     */
                    void SetHostInfos(const std::vector<HostInfo>& _hostInfos);

                    /**
                     * 判断参数 HostInfos 是否已赋值
                     * @return HostInfos 是否已赋值
                     * 
                     */
                    bool HostInfosHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Allowlisted region
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Allowlisted username separated by commas
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Whether the allowlist is effective globally. 1: all hosts; 0: only a single host.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * List of information on machines where the allowlist is effective
                     */
                    std::vector<HostInfo> m_hostInfos;
                    bool m_hostInfosHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTLOGINWHITEOBJ_H_
