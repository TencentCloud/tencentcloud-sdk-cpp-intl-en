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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_QUARATYPEDICTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_QUARATYPEDICTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 
                */
                class QuaraTypeDictItem : public AbstractModel
                {
                public:
                    QuaraTypeDictItem();
                    ~QuaraTypeDictItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Code 
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置
                     * @param _code 
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Recommend 
                     * 
                     */
                    bool GetRecommend() const;

                    /**
                     * 设置
                     * @param _recommend 
                     * 
                     */
                    void SetRecommend(const bool& _recommend);

                    /**
                     * 判断参数 Recommend 是否已赋值
                     * @return Recommend 是否已赋值
                     * 
                     */
                    bool RecommendHasBeenSet() const;

                    /**
                     * 获取
                     * @return Desc 
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置
                     * @param _desc 
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    bool m_recommend;
                    bool m_recommendHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_QUARATYPEDICTITEM_H_
