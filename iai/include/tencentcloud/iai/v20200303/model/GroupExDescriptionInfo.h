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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GROUPEXDESCRIPTIONINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GROUPEXDESCRIPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Custom description field of the group to be modified, which is a `key-value` pair.
                */
                class GroupExDescriptionInfo : public AbstractModel
                {
                public:
                    GroupExDescriptionInfo();
                    ~GroupExDescriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom group description field index, whose value starts from 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupExDescriptionIndex Custom group description field index, whose value starts from 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGroupExDescriptionIndex() const;

                    /**
                     * 设置Custom group description field index, whose value starts from 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _groupExDescriptionIndex Custom group description field index, whose value starts from 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupExDescriptionIndex(const uint64_t& _groupExDescriptionIndex);

                    /**
                     * 判断参数 GroupExDescriptionIndex 是否已赋值
                     * @return GroupExDescriptionIndex 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionIndexHasBeenSet() const;

                    /**
                     * 获取Content of the custom group description field to be updated
                     * @return GroupExDescription Content of the custom group description field to be updated
                     * 
                     */
                    std::string GetGroupExDescription() const;

                    /**
                     * 设置Content of the custom group description field to be updated
                     * @param _groupExDescription Content of the custom group description field to be updated
                     * 
                     */
                    void SetGroupExDescription(const std::string& _groupExDescription);

                    /**
                     * 判断参数 GroupExDescription 是否已赋值
                     * @return GroupExDescription 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionHasBeenSet() const;

                private:

                    /**
                     * Custom group description field index, whose value starts from 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_groupExDescriptionIndex;
                    bool m_groupExDescriptionIndexHasBeenSet;

                    /**
                     * Content of the custom group description field to be updated
                     */
                    std::string m_groupExDescription;
                    bool m_groupExDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GROUPEXDESCRIPTIONINFO_H_
