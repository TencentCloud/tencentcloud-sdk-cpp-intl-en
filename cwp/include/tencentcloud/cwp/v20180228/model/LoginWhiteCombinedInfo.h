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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                     * 获取Allowlist region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Places Allowlist region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Allowlist region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _places Allowlist region
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Allowlisted IPs (Multiple IPs are separated by commas.)
                     * @return SrcIp Allowlisted IPs (Multiple IPs are separated by commas.)
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Allowlisted IPs (Multiple IPs are separated by commas.)
                     * @param _srcIp Allowlisted IPs (Multiple IPs are separated by commas.)
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
                     * 获取Region string
                     * @return Locale Region string
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置Region string
                     * @param _locale Region string
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

                    /**
                     * 获取Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list.
                     * @return IsGlobal Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list.
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list.
                     * @param _isGlobal Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list.
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
                     * 获取Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.
                     * @return Name Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.
                     * @param _name Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.
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
                     * 获取Return the server name when the allowlist applies to only one server.
                     * @return Desc Return the server name when the allowlist applies to only one server.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Return the server name when the allowlist applies to only one server.
                     * @param _desc Return the server name when the allowlist applies to only one server.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Last modification time
                     * @return ModifyTime Last modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modification time
                     * @param _modifyTime Last modification time
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
                     * 获取Server UUID
                     * @return Uuid Server UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Server UUID
                     * @param _uuid Server UUID
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
                     * 获取Login Location
                     * @return Locations Login Location
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置Login Location
                     * @param _locations Login Location
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
                     * Allowlist region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * Allowlisted users (Multiple users are separated by commas.)
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Allowlisted IPs (Multiple IPs are separated by commas.)
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Region string
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

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

                    /**
                     * Whether the settings take effect globally. 1: take effect globally; 0: take effect on the specified host list.
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Allowlist name. If IsLocal is set to 1, the name is fixed as All servers. If the allowlist applies to only a single server, the name is the server's private IP Address. If the allowlist applies to multiple servers, the name is the number of servers, such as 11.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Return the server name when the allowlist applies to only one server.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Allowlist ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Server UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Login Location
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_
