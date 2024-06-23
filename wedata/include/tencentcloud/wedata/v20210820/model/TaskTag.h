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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTAG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Tag, can be used as a condition for retrieving tasks
                */
                class TaskTag : public AbstractModel
                {
                public:
                    TaskTag();
                    ~TaskTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag Name
                     * @return TagName Tag Name
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置Tag Name
                     * @param _tagName Tag Name
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取Tag Value List
                     * @return TagValues Tag Value List
                     * 
                     */
                    std::vector<std::string> GetTagValues() const;

                    /**
                     * 设置Tag Value List
                     * @param _tagValues Tag Value List
                     * 
                     */
                    void SetTagValues(const std::vector<std::string>& _tagValues);

                    /**
                     * 判断参数 TagValues 是否已赋值
                     * @return TagValues 是否已赋值
                     * 
                     */
                    bool TagValuesHasBeenSet() const;

                private:

                    /**
                     * Tag Name
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * Tag Value List
                     */
                    std::vector<std::string> m_tagValues;
                    bool m_tagValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTAG_H_
