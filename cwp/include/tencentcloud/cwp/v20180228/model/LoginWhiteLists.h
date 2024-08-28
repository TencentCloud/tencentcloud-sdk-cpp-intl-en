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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITELISTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITELISTS_H_

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
                * Cross-region log-in allowlist
                */
                class LoginWhiteLists : public AbstractModel
                {
                public:
                    LoginWhiteLists();
                    ~LoginWhiteLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Record ID
                     * @return Id Record ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Record ID
                     * @param _id Record ID
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
                     * 获取Yunjing client ID
                     * @return Uuid Yunjing client ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Yunjing client ID
                     * @param _uuid Yunjing client ID
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
                     * 获取Allowlisted regions
                     * @return Places Allowlisted regions
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置Allowlisted regions
                     * @param _places Allowlisted regions
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
                     * 获取Whether a global rule
                     * @return IsGlobal Whether a global rule
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether a global rule
                     * @param _isGlobal Whether a global rule
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Time of creating the allowlist
                     * @return CreateTime Time of creating the allowlist
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time of creating the allowlist
                     * @param _createTime Time of creating the allowlist
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
                     * 获取Time of modifying the allowlist
                     * @return ModifyTime Time of modifying the allowlist
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Time of modifying the allowlist
                     * @param _modifyTime Time of modifying the allowlist
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
                     * 获取Machine name
                     * @return MachineName Machine name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine name
                     * @param _machineName Machine name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Machine IP
                     * @return HostIp Machine IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Machine IP
                     * @param _hostIp Machine IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

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
                     * Record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Yunjing client ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Allowlisted regions
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
                     * Whether a global rule
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Time of creating the allowlist
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time of modifying the allowlist
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Machine name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Machine IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITELISTS_H_
