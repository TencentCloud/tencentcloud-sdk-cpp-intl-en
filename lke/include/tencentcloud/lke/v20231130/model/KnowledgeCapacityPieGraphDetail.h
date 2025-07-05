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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_

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
                * Detailed information of a knowledge library capacity pie chart.
                */
                class KnowledgeCapacityPieGraphDetail : public AbstractModel
                {
                public:
                    KnowledgeCapacityPieGraphDetail();
                    ~KnowledgeCapacityPieGraphDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current application name.
                     * @return AppName Current application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Current application name.
                     * @param _appName Current application name.
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
                     * 获取Number of characters used by the current application.
                     * @return UsedCharSize Number of characters used by the current application.
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置Number of characters used by the current application.
                     * @param _usedCharSize Number of characters used by the current application.
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
                     * 获取Proportion of the current application in total usage.
                     * @return Proportion Proportion of the current application in total usage.
                     * 
                     */
                    double GetProportion() const;

                    /**
                     * 设置Proportion of the current application in total usage.
                     * @param _proportion Proportion of the current application in total usage.
                     * 
                     */
                    void SetProportion(const double& _proportion);

                    /**
                     * 判断参数 Proportion 是否已赋值
                     * @return Proportion 是否已赋值
                     * 
                     */
                    bool ProportionHasBeenSet() const;

                private:

                    /**
                     * Current application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Number of characters used by the current application.
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                    /**
                     * Proportion of the current application in total usage.
                     */
                    double m_proportion;
                    bool m_proportionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGECAPACITYPIEGRAPHDETAIL_H_
