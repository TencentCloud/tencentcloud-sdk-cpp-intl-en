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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTIONCNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTIONCNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CWPP security trend data
                */
                class ScreenProtectionCnt : public AbstractModel
                {
                public:
                    ScreenProtectionCnt();
                    ~ScreenProtectionCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * @return Type cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * @param _type cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * @return Name cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     * @param _name cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
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
                     * 获取Total number
                     * @return Count Total number
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Total number
                     * @param _count Total number
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * cloud: Cloud Security Engine; detect: detection engine; defend: attack defense; threat: threat intelligence; analysis: abnormal analysis; ai: AI engine
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENPROTECTIONCNT_H_
