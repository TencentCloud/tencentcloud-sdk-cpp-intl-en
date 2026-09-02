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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Place.h>
#include <tencentcloud/csip/v20221121/model/HostInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>Add a region to the allowlist</p>
                     * @return Places <p>Add a region to the allowlist</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>Add a region to the allowlist</p>
                     * @param _places <p>Add a region to the allowlist</p>
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
                     * 获取<p>Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.</p>
                     * @return SrcIp <p>Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.</p>
                     * @param _srcIp <p>Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.</p>
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
                     * 获取<p>Allowlisted username separated by commas</p>
                     * @return UserName <p>Allowlisted username separated by commas</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Allowlisted username separated by commas</p>
                     * @param _userName <p>Allowlisted username separated by commas</p>
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
                     * 获取<p>Whether it is effective globally. 1: all hosts; 0: only a single host&#39;</p>
                     * @return IsGlobal <p>Whether it is effective globally. 1: all hosts; 0: only a single host&#39;</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>Whether it is effective globally. 1: all hosts; 0: only a single host&#39;</p>
                     * @param _isGlobal <p>Whether it is effective globally. 1: all hosts; 0: only a single host&#39;</p>
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
                     * 获取<p>Machine information list with allowlist effective</p>
                     * @return HostInfos <p>Machine information list with allowlist effective</p>
                     * 
                     */
                    std::vector<HostInfo> GetHostInfos() const;

                    /**
                     * 设置<p>Machine information list with allowlist effective</p>
                     * @param _hostInfos <p>Machine information list with allowlist effective</p>
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
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
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
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
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
                     * 获取<p>End time.</p>
                     * @return EndTime <p>End time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _endTime <p>End time.</p>
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
                     * <p>Add a region to the allowlist</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>Allowlisted source IP address. IP ranges are supported. Multiple IPs are separated by commas.</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>Allowlisted username separated by commas</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Whether it is effective globally. 1: all hosts; 0: only a single host&#39;</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>Machine information list with allowlist effective</p>
                     */
                    std::vector<HostInfo> m_hostInfos;
                    bool m_hostInfosHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTLOGINWHITEOBJ_H_
