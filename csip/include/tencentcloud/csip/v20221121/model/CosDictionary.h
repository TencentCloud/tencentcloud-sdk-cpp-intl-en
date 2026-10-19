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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSDICTIONARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSDICTIONARY_H_

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
                * cos dictionary information
                */
                class CosDictionary : public AbstractModel
                {
                public:
                    CosDictionary();
                    ~CosDictionary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Dictionary id.</p>
                     * @return DictId <p>Dictionary id.</p>
                     * 
                     */
                    uint64_t GetDictId() const;

                    /**
                     * 设置<p>Dictionary id.</p>
                     * @param _dictId <p>Dictionary id.</p>
                     * 
                     */
                    void SetDictId(const uint64_t& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     * 
                     */
                    bool DictIdHasBeenSet() const;

                    /**
                     * 获取<p>Dictionary name</p>
                     * @return DictName <p>Dictionary name</p>
                     * 
                     */
                    std::string GetDictName() const;

                    /**
                     * 设置<p>Dictionary name</p>
                     * @param _dictName <p>Dictionary name</p>
                     * 
                     */
                    void SetDictName(const std::string& _dictName);

                    /**
                     * 判断参数 DictName 是否已赋值
                     * @return DictName 是否已赋值
                     * 
                     */
                    bool DictNameHasBeenSet() const;

                private:

                    /**
                     * <p>Dictionary id.</p>
                     */
                    uint64_t m_dictId;
                    bool m_dictIdHasBeenSet;

                    /**
                     * <p>Dictionary name</p>
                     */
                    std::string m_dictName;
                    bool m_dictNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSDICTIONARY_H_
