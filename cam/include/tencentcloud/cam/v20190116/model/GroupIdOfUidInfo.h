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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Information on the association between a sub-user and a User Group
                */
                class GroupIdOfUidInfo : public AbstractModel
                {
                public:
                    GroupIdOfUidInfo();
                    ~GroupIdOfUidInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User Group ID
                     * @return GroupId User Group ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置User Group ID
                     * @param _groupId User Group ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Sub-user UID
                     * @return Uid Sub-user UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置Sub-user UID
                     * @param _uid Sub-user UID
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Sub-user UIN. For UIN and UID, at least one of them is required.
                     * @return Uin Sub-user UIN. For UIN and UID, at least one of them is required.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Sub-user UIN. For UIN and UID, at least one of them is required.
                     * @param _uin Sub-user UIN. For UIN and UID, at least one of them is required.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * User Group ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Sub-user UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Sub-user UIN. For UIN and UID, at least one of them is required.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GROUPIDOFUIDINFO_H_
