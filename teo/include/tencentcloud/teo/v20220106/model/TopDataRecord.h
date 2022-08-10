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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_TOPDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_TOPDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TopDetailData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Top data of layer-7 data analysis
                */
                class TopDataRecord : public AbstractModel
                {
                public:
                    TopDataRecord();
                    ~TopDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query dimension value
                     * @return TypeKey Query dimension value
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置Query dimension value
                     * @param TypeKey Query dimension value
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     */
                    bool TypeKeyHasBeenSet() const;

                    /**
                     * 获取Top data rankings
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailData Top data rankings
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TopDetailData> GetDetailData() const;

                    /**
                     * 设置Top data rankings
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DetailData Top data rankings
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDetailData(const std::vector<TopDetailData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * Query dimension value
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Top data rankings
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TopDetailData> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_TOPDATARECORD_H_
