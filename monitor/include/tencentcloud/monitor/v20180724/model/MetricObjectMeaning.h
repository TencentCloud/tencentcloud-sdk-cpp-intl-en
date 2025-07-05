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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICOBJECTMEANING_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICOBJECTMEANING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Meaning of metric data
                */
                class MetricObjectMeaning : public AbstractModel
                {
                public:
                    MetricObjectMeaning();
                    ~MetricObjectMeaning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Meaning of the metric in English
                     * @return En Meaning of the metric in English
                     * 
                     */
                    std::string GetEn() const;

                    /**
                     * 设置Meaning of the metric in English
                     * @param _en Meaning of the metric in English
                     * 
                     */
                    void SetEn(const std::string& _en);

                    /**
                     * 判断参数 En 是否已赋值
                     * @return En 是否已赋值
                     * 
                     */
                    bool EnHasBeenSet() const;

                    /**
                     * 获取Meaning of the metric in Chinese
                     * @return Zh Meaning of the metric in Chinese
                     * 
                     */
                    std::string GetZh() const;

                    /**
                     * 设置Meaning of the metric in Chinese
                     * @param _zh Meaning of the metric in Chinese
                     * 
                     */
                    void SetZh(const std::string& _zh);

                    /**
                     * 判断参数 Zh 是否已赋值
                     * @return Zh 是否已赋值
                     * 
                     */
                    bool ZhHasBeenSet() const;

                private:

                    /**
                     * Meaning of the metric in English
                     */
                    std::string m_en;
                    bool m_enHasBeenSet;

                    /**
                     * Meaning of the metric in Chinese
                     */
                    std::string m_zh;
                    bool m_zhHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICOBJECTMEANING_H_
