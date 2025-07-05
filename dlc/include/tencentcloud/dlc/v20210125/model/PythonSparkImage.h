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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_

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
                * Python-spark image information.
                */
                class PythonSparkImage : public AbstractModel
                {
                public:
                    PythonSparkImage();
                    ~PythonSparkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the spark image
                     * @return SparkImageId Unique ID of the spark image
                     * 
                     */
                    std::string GetSparkImageId() const;

                    /**
                     * 设置Unique ID of the spark image
                     * @param _sparkImageId Unique ID of the spark image
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
                     * 获取ID of the cluster image of the minor version
                     * @return ChildImageVersionId ID of the cluster image of the minor version
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 设置ID of the cluster image of the minor version
                     * @param _childImageVersionId ID of the cluster image of the minor version
                     * 
                     */
                    void SetChildImageVersionId(const std::string& _childImageVersionId);

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取Name of the spark image
                     * @return SparkImageVersion Name of the spark image
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置Name of the spark image
                     * @param _sparkImageVersion Name of the spark image
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
                     * 获取Description of the spark image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description of the spark image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the spark image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description of the spark image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the spark image
                     */
                    std::string m_sparkImageId;
                    bool m_sparkImageIdHasBeenSet;

                    /**
                     * ID of the cluster image of the minor version
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * Name of the spark image
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * Description of the spark image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PYTHONSPARKIMAGE_H_
