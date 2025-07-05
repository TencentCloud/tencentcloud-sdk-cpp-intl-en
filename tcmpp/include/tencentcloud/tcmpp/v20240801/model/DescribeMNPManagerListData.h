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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPMANAGERLISTDATA_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPMANAGERLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mini program management page list
                */
                class DescribeMNPManagerListData : public AbstractModel
                {
                public:
                    DescribeMNPManagerListData();
                    ~DescribeMNPManagerListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program icon
                     * @return MNPIcon Mini program icon
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
                     * @param _mNPIcon Mini program icon
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取Mini program name
                     * @return MNPName Mini program name
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
                     * @param _mNPName Mini program name
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Team name
                     * @return TeamName Team name
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
                     * @param _teamName Team name
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Access status 1-Not accessed 2-Accessed
                     * @return AccessStatus Access status 1-Not accessed 2-Accessed
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置Access status 1-Not accessed 2-Accessed
                     * @param _accessStatus Access status 1-Not accessed 2-Accessed
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

                    /**
                     * 获取Mini program release status. 1: Released; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Mini program release status. 1: Released; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Mini program release status. 1: Released; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Mini program release status. 1: Released; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program icon
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Team name
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Access status 1-Not accessed 2-Accessed
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * Mini program release status. 1: Released; 2: Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPMANAGERLISTDATA_H_
