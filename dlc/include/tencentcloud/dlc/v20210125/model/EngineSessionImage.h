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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * TensorFlow, Pytorch, SK-learn image information list.
                */
                class EngineSessionImage : public AbstractModel
                {
                public:
                    EngineSessionImage();
                    ~EngineSessionImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique id of the Spark mirror.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImageId Specifies the unique id of the Spark mirror.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkImageId() const;

                    /**
                     * 设置Specifies the unique id of the Spark mirror.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImageId Specifies the unique id of the Spark mirror.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImageId(const std::string& _sparkImageId);

                    /**
                     * 判断参数 SparkImageId 是否已赋值
                     * @return SparkImageId 是否已赋值
                     * 
                     */
                    bool SparkImageIdHasBeenSet() const;

                    /**
                     * 获取Spark image version name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImageVersion Spark image version name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置Spark image version name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImageVersion Spark image version name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取Minor version image type. 1: TensorFlow, 2: Pytorch, 3: SK-learn.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImageType Minor version image type. 1: TensorFlow, 2: Pytorch, 3: SK-learn.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSparkImageType() const;

                    /**
                     * 设置Minor version image type. 1: TensorFlow, 2: Pytorch, 3: SK-learn.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImageType Minor version image type. 1: TensorFlow, 2: Pytorch, 3: SK-learn.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImageType(const int64_t& _sparkImageType);

                    /**
                     * 判断参数 SparkImageType 是否已赋值
                     * @return SparkImageType 是否已赋值
                     * 
                     */
                    bool SparkImageTypeHasBeenSet() const;

                    /**
                     * 获取Image address.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SparkImageTag Image address.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSparkImageTag() const;

                    /**
                     * 设置Image address.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sparkImageTag Image address.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSparkImageTag(const std::string& _sparkImageTag);

                    /**
                     * 判断参数 SparkImageTag 是否已赋值
                     * @return SparkImageTag 是否已赋值
                     * 
                     */
                    bool SparkImageTagHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique id of the Spark mirror.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkImageId;
                    bool m_sparkImageIdHasBeenSet;

                    /**
                     * Spark image version name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * Minor version image type. 1: TensorFlow, 2: Pytorch, 3: SK-learn.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sparkImageType;
                    bool m_sparkImageTypeHasBeenSet;

                    /**
                     * Image address.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sparkImageTag;
                    bool m_sparkImageTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_
