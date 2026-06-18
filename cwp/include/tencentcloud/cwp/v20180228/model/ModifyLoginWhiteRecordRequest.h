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
                     * 获取<p>Allowlisted users (multiple users separated by commas)</p>
                     * @return UserName <p>Allowlisted users (multiple users separated by commas)</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Allowlisted users (multiple users separated by commas)</p>
                     * @param _userName <p>Allowlisted users (multiple users separated by commas)</p>
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
                     * 获取<p>Allowlisted dimension information recorded after the update</p>
                     * @return SrcIp <p>Allowlisted dimension information recorded after the update</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>Allowlisted dimension information recorded after the update</p>
                     * @param _srcIp <p>Allowlisted dimension information recorded after the update</p>
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

                    /**
                     * 获取<p>Remark</p>
                     * @return Remark <p>Remark</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark</p>
                     * @param _remark <p>Remark</p>
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
                     * 获取<p>Whether it applies to all servers: 0 - no; 1 - yes</p>
                     * @return IsGlobal <p>Whether it applies to all servers: 0 - no; 1 - yes</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>Whether it applies to all servers: 0 - no; 1 - yes</p>
                     * @param _isGlobal <p>Whether it applies to all servers: 0 - no; 1 - yes</p>
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
                     * 获取<p>Allowlist ID</p>
                     * @return Id <p>Allowlist ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Allowlist ID</p>
                     * @param _id <p>Allowlist ID</p>
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
                     * 获取<p>Server list</p>
                     * @return Hosts <p>Server list</p>
                     * 
                     */
                    std::vector<HostInfo> GetHosts() const;

                    /**
                     * 设置<p>Server list</p>
                     * @param _hosts <p>Server list</p>
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
                     * 获取<p>Region list</p>
                     * @return Places <p>Region list</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>Region list</p>
                     * @param _places <p>Region list</p>
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
                     * <p>Allowlisted users (multiple users separated by commas)</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Allowlisted dimension information recorded after the update</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

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

                    /**
                     * <p>Remark</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Whether it applies to all servers: 0 - no; 1 - yes</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>Allowlist ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Server list</p>
                     */
                    std::vector<HostInfo> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * <p>Region list</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
