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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Supported charts for the app.
                */
                class AppChart : public AbstractModel
                {
                public:
                    AppChart();
                    ~AppChart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取chart name.
                     * @return Name chart name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置chart name.
                     * @param _name chart name.
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
                     * 获取Tag of the chart.
                     * @return Label Tag of the chart.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag of the chart.
                     * @param _label Tag of the chart.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Version of the chart.
                     * @return LatestVersion Version of the chart.
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置Version of the chart.
                     * @param _latestVersion Version of the chart.
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                private:

                    /**
                     * chart name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag of the chart.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Version of the chart.
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_APPCHART_H_
