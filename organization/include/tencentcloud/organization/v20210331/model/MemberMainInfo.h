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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERMAININFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERMAININFO_H_

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
                * Main member information.
                */
                class MemberMainInfo : public AbstractModel
                {
                public:
                    MemberMainInfo();
                    ~MemberMainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberUin Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberUin Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Member name j.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberName Member name j.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置Member name j.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberName Member name j.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                private:

                    /**
                     * Member UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Member name j.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERMAININFO_H_
