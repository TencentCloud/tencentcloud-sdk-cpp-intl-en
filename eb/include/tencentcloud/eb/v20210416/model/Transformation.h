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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Extraction.h>
#include <tencentcloud/eb/v20210416/model/EtlFilter.h>
#include <tencentcloud/eb/v20210416/model/Transform.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Transformer
                */
                class Transformation : public AbstractModel
                {
                public:
                    Transformation();
                    ~Transformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Describes how to extract data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Extraction Describes how to extract data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Extraction GetExtraction() const;

                    /**
                     * 设置Describes how to extract data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Extraction Describes how to extract data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExtraction(const Extraction& _extraction);

                    /**
                     * 判断参数 Extraction 是否已赋值
                     * @return Extraction 是否已赋值
                     */
                    bool ExtractionHasBeenSet() const;

                    /**
                     * 获取Describes how to filter data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EtlFilter Describes how to filter data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EtlFilter GetEtlFilter() const;

                    /**
                     * 设置Describes how to filter data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EtlFilter Describes how to filter data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEtlFilter(const EtlFilter& _etlFilter);

                    /**
                     * 判断参数 EtlFilter 是否已赋值
                     * @return EtlFilter 是否已赋值
                     */
                    bool EtlFilterHasBeenSet() const;

                    /**
                     * 获取Describes how to transform data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Transform Describes how to transform data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Transform GetTransform() const;

                    /**
                     * 设置Describes how to transform data
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Transform Describes how to transform data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTransform(const Transform& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     */
                    bool TransformHasBeenSet() const;

                private:

                    /**
                     * Describes how to extract data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Extraction m_extraction;
                    bool m_extractionHasBeenSet;

                    /**
                     * Describes how to filter data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EtlFilter m_etlFilter;
                    bool m_etlFilterHasBeenSet;

                    /**
                     * Describes how to transform data
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Transform m_transform;
                    bool m_transformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORMATION_H_
