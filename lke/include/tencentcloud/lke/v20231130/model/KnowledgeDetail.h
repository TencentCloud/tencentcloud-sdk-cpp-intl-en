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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Application usage details of knowledge library capacity.
                */
                class KnowledgeDetail : public AbstractModel
                {
                public:
                    KnowledgeDetail();
                    ~KnowledgeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name.
                     * @return AppName Application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name.
                     * @param _appName Application name.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Number of used characters.
                     * @return UsedCharSize Number of used characters.
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置Number of used characters.
                     * @param _usedCharSize Number of used characters.
                     * 
                     */
                    void SetUsedCharSize(const std::string& _usedCharSize);

                    /**
                     * 判断参数 UsedCharSize 是否已赋值
                     * @return UsedCharSize 是否已赋值
                     * 
                     */
                    bool UsedCharSizeHasBeenSet() const;

                    /**
                     * 获取Usage proportion.
                     * @return Proportion Usage proportion.
                     * 
                     */
                    double GetProportion() const;

                    /**
                     * 设置Usage proportion.
                     * @param _proportion Usage proportion.
                     * 
                     */
                    void SetProportion(const double& _proportion);

                    /**
                     * 判断参数 Proportion 是否已赋值
                     * @return Proportion 是否已赋值
                     * 
                     */
                    bool ProportionHasBeenSet() const;

                    /**
                     * 获取Exceeding character count.
                     * @return ExceedCharSize Exceeding character count.
                     * 
                     */
                    std::string GetExceedCharSize() const;

                    /**
                     * 设置Exceeding character count.
                     * @param _exceedCharSize Exceeding character count.
                     * 
                     */
                    void SetExceedCharSize(const std::string& _exceedCharSize);

                    /**
                     * 判断参数 ExceedCharSize 是否已赋值
                     * @return ExceedCharSize 是否已赋值
                     * 
                     */
                    bool ExceedCharSizeHasBeenSet() const;

                private:

                    /**
                     * Application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Number of used characters.
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                    /**
                     * Usage proportion.
                     */
                    double m_proportion;
                    bool m_proportionHasBeenSet;

                    /**
                     * Exceeding character count.
                     */
                    std::string m_exceedCharSize;
                    bool m_exceedCharSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAIL_H_
