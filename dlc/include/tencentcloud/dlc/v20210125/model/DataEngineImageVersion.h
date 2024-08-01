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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_

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
                * Information about the major version of the cluster image
                */
                class DataEngineImageVersion : public AbstractModel
                {
                public:
                    DataEngineImageVersion();
                    ~DataEngineImageVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the major version of the image
                     * @return ImageVersionId ID of the major version of the image
                     * 
                     */
                    std::string GetImageVersionId() const;

                    /**
                     * 设置ID of the major version of the image
                     * @param _imageVersionId ID of the major version of the image
                     * 
                     */
                    void SetImageVersionId(const std::string& _imageVersionId);

                    /**
                     * 判断参数 ImageVersionId 是否已赋值
                     * @return ImageVersionId 是否已赋值
                     * 
                     */
                    bool ImageVersionIdHasBeenSet() const;

                    /**
                     * 获取Name of the major version of the image
                     * @return ImageVersion Name of the major version of the image
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置Name of the major version of the image
                     * @param _imageVersion Name of the major version of the image
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取Description of the major version of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description of the major version of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the major version of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description of the major version of the image
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
                     * 获取Whether it is a public version: 1: public version; 2: private version
                     * @return IsPublic Whether it is a public version: 1: public version; 2: private version
                     * 
                     */
                    uint64_t GetIsPublic() const;

                    /**
                     * 设置Whether it is a public version: 1: public version; 2: private version
                     * @param _isPublic Whether it is a public version: 1: public version; 2: private version
                     * 
                     */
                    void SetIsPublic(const uint64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取Cluster types: SparkSQL, PrestoSQL, and SparkBatch
                     * @return EngineType Cluster types: SparkSQL, PrestoSQL, and SparkBatch
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置Cluster types: SparkSQL, PrestoSQL, and SparkBatch
                     * @param _engineType Cluster types: SparkSQL, PrestoSQL, and SparkBatch
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Version status. 1: initializing; 2: online; 3: offline
                     * @return IsSharedEngine Version status. 1: initializing; 2: online; 3: offline
                     * 
                     */
                    uint64_t GetIsSharedEngine() const;

                    /**
                     * 设置Version status. 1: initializing; 2: online; 3: offline
                     * @param _isSharedEngine Version status. 1: initializing; 2: online; 3: offline
                     * 
                     */
                    void SetIsSharedEngine(const uint64_t& _isSharedEngine);

                    /**
                     * 判断参数 IsSharedEngine 是否已赋值
                     * @return IsSharedEngine 是否已赋值
                     * 
                     */
                    bool IsSharedEngineHasBeenSet() const;

                    /**
                     * 获取Version status. 1: initializing; 2: online; 3: offline
                     * @return State Version status. 1: initializing; 2: online; 3: offline
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置Version status. 1: initializing; 2: online; 3: offline
                     * @param _state Version status. 1: initializing; 2: online; 3: offline
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Insert time
                     * @return InsertTime Insert time
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Insert time
                     * @param _insertTime Insert time
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

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
                     * ID of the major version of the image
                     */
                    std::string m_imageVersionId;
                    bool m_imageVersionIdHasBeenSet;

                    /**
                     * Name of the major version of the image
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * Description of the major version of the image
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is a public version: 1: public version; 2: private version
                     */
                    uint64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * Cluster types: SparkSQL, PrestoSQL, and SparkBatch
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Version status. 1: initializing; 2: online; 3: offline
                     */
                    uint64_t m_isSharedEngine;
                    bool m_isSharedEngineHasBeenSet;

                    /**
                     * Version status. 1: initializing; 2: online; 3: offline
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Insert time
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGEVERSION_H_
