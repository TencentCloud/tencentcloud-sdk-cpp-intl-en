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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupInfoTopics.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Stores the information of partition assigned to this consumer
                */
                class Assignment : public AbstractModel
                {
                public:
                    Assignment();
                    ~Assignment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Assignment version information
                     * @return Version Assignment version information
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Assignment version information
                     * @param _version Assignment version information
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Topic information list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Topics Topic information list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GroupInfoTopics> GetTopics() const;

                    /**
                     * 设置Topic information list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _topics Topic information list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopics(const std::vector<GroupInfoTopics>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * Assignment version information
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Topic information list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GroupInfoTopics> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_
