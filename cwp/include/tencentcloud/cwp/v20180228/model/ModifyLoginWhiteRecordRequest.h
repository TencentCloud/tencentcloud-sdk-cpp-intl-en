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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostInfo.h>
#include <tencentcloud/cwp/v20180228/model/Place.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteRecord request structure.
                */
                class ModifyLoginWhiteRecordRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteRecordRequest();
                    ~ModifyLoginWhiteRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Allowlisted users (Multiple users are separated by commas.)
                     * @return UserName Allowlisted users (Multiple users are separated by commas.)
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Allowlisted users (Multiple users are separated by commas.)
                     * @param _userName Allowlisted users (Multiple users are separated by commas.)
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
                     * 获取Allowlisted dimension information recorded after the update
                     * @return SrcIp Allowlisted dimension information recorded after the update
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Allowlisted dimension information recorded after the update
                     * @param _srcIp Allowlisted dimension information recorded after the update
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
                     * 获取Whether it applies to all servers: 0: no; 1: yes
                     * @return IsGlobal Whether it applies to all servers: 0: no; 1: yes
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether it applies to all servers: 0: no; 1: yes
                     * @param _isGlobal Whether it applies to all servers: 0: no; 1: yes
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
                     * 获取Allowlist ID
                     * @return Id Allowlist ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Allowlist ID
                     * @param _id Allowlist ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Server list
                     * @return Hosts Server list
                     * 
                     */
                    std::vector<HostInfo> GetHosts() const;

                    /**
                     * 设置Server list
                     * @param _hosts Server list
                     * 
                     */
                    void SetHosts(const std::vector<HostInfo>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Region list
                     * @return Places Region list
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Region list
                     * @param _places Region list
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                private:

                    /**
                     * Allowlisted users (Multiple users are separated by commas.)
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Allowlisted dimension information recorded after the update
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

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

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether it applies to all servers: 0: no; 1: yes
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Allowlist ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Server list
                     */
                    std::vector<HostInfo> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Region list
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
