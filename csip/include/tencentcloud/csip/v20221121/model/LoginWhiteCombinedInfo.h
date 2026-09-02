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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Place.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Merge cross-region log-in allowlists
                */
                class LoginWhiteCombinedInfo : public AbstractModel
                {
                public:
                    LoginWhiteCombinedInfo();
                    ~LoginWhiteCombinedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Allowlist region</p>
                     * @return Places <p>Allowlist region</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>Allowlist region</p>
                     * @param _places <p>Allowlist region</p>
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
                     * 获取<p>allowlisted users (multiple users separated by commas)</p>
                     * @return UserName <p>allowlisted users (multiple users separated by commas)</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>allowlisted users (multiple users separated by commas)</p>
                     * @param _userName <p>allowlisted users (multiple users separated by commas)</p>
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
                     * 获取<p>Allowlisted IPs (multiple IPs separated by commas)</p>
                     * @return SrcIp <p>Allowlisted IPs (multiple IPs separated by commas)</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>Allowlisted IPs (multiple IPs separated by commas)</p>
                     * @param _srcIp <p>Allowlisted IPs (multiple IPs separated by commas)</p>
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
                     * 获取<p>Region string</p>
                     * @return Locale <p>Region string</p>
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置<p>Region string</p>
                     * @param _locale <p>Region string</p>
                     * 
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     * 
                     */
                    bool LocaleHasBeenSet() const;

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

                    /**
                     * 获取<p>Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list'</p>
                     * @return IsGlobal <p>Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list'</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list'</p>
                     * @param _isGlobal <p>Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list'</p>
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
                     * 获取<p>Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.</p>
                     * @return Name <p>Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.</p>
                     * @param _name <p>Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Return the server name when the allowlist applies to only one server.</p>
                     * @return Desc <p>Return the server name when the allowlist applies to only one server.</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>Return the server name when the allowlist applies to only one server.</p>
                     * @param _desc <p>Return the server name when the allowlist applies to only one server.</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last modification time</p>
                     * @return ModifyTime <p>Last modification time</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>Last modification time</p>
                     * @param _modifyTime <p>Last modification time</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>Server Uuid</p>
                     * @return Uuid <p>Server Uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>Server Uuid</p>
                     * @param _uuid <p>Server Uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>Login location</p>
                     * @return Locations <p>Login location</p>
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置<p>Login location</p>
                     * @param _locations <p>Login location</p>
                     * 
                     */
                    void SetLocations(const std::string& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                private:

                    /**
                     * <p>Allowlist region</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>allowlisted users (multiple users separated by commas)</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Allowlisted IPs (multiple IPs separated by commas)</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>Region string</p>
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

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

                    /**
                     * <p>Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list'</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Return the server name when the allowlist applies to only one server.</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>Allowlist ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modification time</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Server Uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Login location</p>
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_
