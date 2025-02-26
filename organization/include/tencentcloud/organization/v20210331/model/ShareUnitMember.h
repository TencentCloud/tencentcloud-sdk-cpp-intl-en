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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Shared unit members
                */
                class ShareUnitMember : public AbstractModel
                {
                public:
                    ShareUnitMember();
                    ~ShareUnitMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared member UIN.
                     * @return ShareMemberUin Shared member UIN.
                     * 
                     */
                    int64_t GetShareMemberUin() const;

                    /**
                     * 设置Shared member UIN.
                     * @param _shareMemberUin Shared member UIN.
                     * 
                     */
                    void SetShareMemberUin(const int64_t& _shareMemberUin);

                    /**
                     * 判断参数 ShareMemberUin 是否已赋值
                     * @return ShareMemberUin 是否已赋值
                     * 
                     */
                    bool ShareMemberUinHasBeenSet() const;

                    /**
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Shared member UIN.
                     */
                    int64_t m_shareMemberUin;
                    bool m_shareMemberUinHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITMEMBER_H_
