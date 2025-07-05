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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TOPDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TOPDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TopDetailData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The top-ranked data record
                */
                class TopDataRecord : public AbstractModel
                {
                public:
                    TopDataRecord();
                    ~TopDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The query dimension value.
                     * @return TypeKey The query dimension value.
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置The query dimension value.
                     * @param _typeKey The query dimension value.
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                    /**
                     * 获取Top data rankings
                     * @return DetailData Top data rankings
                     * 
                     */
                    std::vector<TopDetailData> GetDetailData() const;

                    /**
                     * 设置Top data rankings
                     * @param _detailData Top data rankings
                     * 
                     */
                    void SetDetailData(const std::vector<TopDetailData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * The query dimension value.
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Top data rankings
                     */
                    std::vector<TopDetailData> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TOPDATARECORD_H_
