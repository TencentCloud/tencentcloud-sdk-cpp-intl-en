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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_OVERSEATEXTSTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_OVERSEATEXTSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Usage statistics of Voice-to-Text of outside-MLC requests
                */
                class OverseaTextStatisticsItem : public AbstractModel
                {
                public:
                    OverseaTextStatisticsItem();
                    ~OverseaTextStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical value (in seconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Data Statistical value (in seconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetData() const;

                    /**
                     * 设置Statistical value (in seconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Data Statistical value (in seconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetData(const double& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Statistical value (in seconds)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_OVERSEATEXTSTATISTICSITEM_H_