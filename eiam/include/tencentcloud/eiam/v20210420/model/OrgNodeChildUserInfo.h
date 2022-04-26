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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDUSERINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * User information list under the organization sub-node
                */
                class OrgNodeChildUserInfo : public AbstractModel
                {
                public:
                    OrgNodeChildUserInfo();
                    ~OrgNodeChildUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeId Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrgNodeId Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserInfo User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserInfo> GetUserInfo() const;

                    /**
                     * 设置User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UserInfo User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserInfo(const std::vector<UserInfo>& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalUserNum Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalUserNum() const;

                    /**
                     * 设置Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TotalUserNum Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalUserNum(const int64_t& _totalUserNum);

                    /**
                     * 判断参数 TotalUserNum 是否已赋值
                     * @return TotalUserNum 是否已赋值
                     */
                    bool TotalUserNumHasBeenSet() const;

                    /**
                     * 获取Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeIdPath Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgNodeIdPath() const;

                    /**
                     * 设置Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrgNodeIdPath Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrgNodeIdPath(const std::string& _orgNodeIdPath);

                    /**
                     * 判断参数 OrgNodeIdPath 是否已赋值
                     * @return OrgNodeIdPath 是否已赋值
                     */
                    bool OrgNodeIdPathHasBeenSet() const;

                    /**
                     * 获取Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeNamePath Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOrgNodeNamePath() const;

                    /**
                     * 设置Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OrgNodeNamePath Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOrgNodeNamePath(const std::string& _orgNodeNamePath);

                    /**
                     * 判断参数 OrgNodeNamePath 是否已赋值
                     * @return OrgNodeNamePath 是否已赋值
                     */
                    bool OrgNodeNamePathHasBeenSet() const;

                private:

                    /**
                     * Organization node ID, which is globally unique and can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * User information list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserInfo> m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * Total number of users under the current organization node.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalUserNum;
                    bool m_totalUserNumHasBeenSet;

                    /**
                     * Organization ID path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeIdPath;
                    bool m_orgNodeIdPathHasBeenSet;

                    /**
                     * Organization name path.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeNamePath;
                    bool m_orgNodeNamePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_ORGNODECHILDUSERINFO_H_
