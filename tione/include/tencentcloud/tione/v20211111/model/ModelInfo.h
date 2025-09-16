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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/GooseFSx.h>
#include <tencentcloud/tione/v20211111/model/PublicDataSourceFS.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Model description information.
                */
                class ModelInfo : public AbstractModel
                {
                public:
                    ModelInfo();
                    ~ModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The model version ID is returned by the DescribeTrainingModelVersion API when querying the model.Enter the task ID of the Automated Machine Learning (AutoML) model.
                     * @return ModelVersionId The model version ID is returned by the DescribeTrainingModelVersion API when querying the model.Enter the task ID of the Automated Machine Learning (AutoML) model.
                     * 
                     */
                    std::string GetModelVersionId() const;

                    /**
                     * 设置The model version ID is returned by the DescribeTrainingModelVersion API when querying the model.Enter the task ID of the Automated Machine Learning (AutoML) model.
                     * @param _modelVersionId The model version ID is returned by the DescribeTrainingModelVersion API when querying the model.Enter the task ID of the Automated Machine Learning (AutoML) model.
                     * 
                     */
                    void SetModelVersionId(const std::string& _modelVersionId);

                    /**
                     * 判断参数 ModelVersionId 是否已赋值
                     * @return ModelVersionId 是否已赋值
                     * 
                     */
                    bool ModelVersionIdHasBeenSet() const;

                    /**
                     * 获取Model ID.
                     * @return ModelId Model ID.
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置Model ID.
                     * @param _modelId Model ID.
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Model name.
                     * @return ModelName Model name.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name.
                     * @param _modelName Model name.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Model version.
                     * @return ModelVersion Model version.
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Model version.
                     * @param _modelVersion Model version.
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取Model source.
                     * @return ModelSource Model source.
                     * 
                     */
                    std::string GetModelSource() const;

                    /**
                     * 设置Model source.
                     * @param _modelSource Model source.
                     * 
                     */
                    void SetModelSource(const std::string& _modelSource);

                    /**
                     * 判断参数 ModelSource 是否已赋值
                     * @return ModelSource 是否已赋值
                     * 
                     */
                    bool ModelSourceHasBeenSet() const;

                    /**
                     * 获取COS path information.
                     * @return CosPathInfo COS path information.
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置COS path information.
                     * @param _cosPathInfo COS path information.
                     * 
                     */
                    void SetCosPathInfo(const CosPathInfo& _cosPathInfo);

                    /**
                     * 判断参数 CosPathInfo 是否已赋值
                     * @return CosPathInfo 是否已赋值
                     * 
                     */
                    bool CosPathInfoHasBeenSet() const;

                    /**
                     * 获取GooseFSx configurations, and is valid when ModelSource is GooseFSx.
                     * @return GooseFSx GooseFSx configurations, and is valid when ModelSource is GooseFSx.
                     * 
                     */
                    GooseFSx GetGooseFSx() const;

                    /**
                     * 设置GooseFSx configurations, and is valid when ModelSource is GooseFSx.
                     * @param _gooseFSx GooseFSx configurations, and is valid when ModelSource is GooseFSx.
                     * 
                     */
                    void SetGooseFSx(const GooseFSx& _gooseFSx);

                    /**
                     * 判断参数 GooseFSx 是否已赋值
                     * @return GooseFSx 是否已赋值
                     * 
                     */
                    bool GooseFSxHasBeenSet() const;

                    /**
                     * 获取Algorithm framework corresponding to the model (reserved field).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlgorithmFramework Algorithm framework corresponding to the model (reserved field).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlgorithmFramework() const;

                    /**
                     * 设置Algorithm framework corresponding to the model (reserved field).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _algorithmFramework Algorithm framework corresponding to the model (reserved field).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlgorithmFramework(const std::string& _algorithmFramework);

                    /**
                     * 判断参数 AlgorithmFramework 是否已赋值
                     * @return AlgorithmFramework 是否已赋值
                     * 
                     */
                    bool AlgorithmFrameworkHasBeenSet() const;

                    /**
                     * 获取Default: NORMAL; accelerated model: ACCELERATE; automatic learning model: AUTO_ML.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModelType Default: NORMAL; accelerated model: ACCELERATE; automatic learning model: AUTO_ML.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置Default: NORMAL; accelerated model: ACCELERATE; automatic learning model: AUTO_ML.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modelType Default: NORMAL; accelerated model: ACCELERATE; automatic learning model: AUTO_ML.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取Model format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModelFormat Model format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModelFormat() const;

                    /**
                     * 设置Model format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modelFormat Model format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModelFormat(const std::string& _modelFormat);

                    /**
                     * 判断参数 ModelFormat 是否已赋值
                     * @return ModelFormat 是否已赋值
                     * 
                     */
                    bool ModelFormatHasBeenSet() const;

                    /**
                     * 获取Whether it is a private LLM.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPrivateModel Whether it is a private LLM.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPrivateModel() const;

                    /**
                     * 设置Whether it is a private LLM.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPrivateModel Whether it is a private LLM.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPrivateModel(const bool& _isPrivateModel);

                    /**
                     * 判断参数 IsPrivateModel 是否已赋值
                     * @return IsPrivateModel 是否已赋值
                     * 
                     */
                    bool IsPrivateModelHasBeenSet() const;

                    /**
                     * 获取Model category. Valid values: MultiModal (multi-modal) and LLM (text LLM).
                     * @return ModelCategory Model category. Valid values: MultiModal (multi-modal) and LLM (text LLM).
                     * 
                     */
                    std::string GetModelCategory() const;

                    /**
                     * 设置Model category. Valid values: MultiModal (multi-modal) and LLM (text LLM).
                     * @param _modelCategory Model category. Valid values: MultiModal (multi-modal) and LLM (text LLM).
                     * 
                     */
                    void SetModelCategory(const std::string& _modelCategory);

                    /**
                     * 判断参数 ModelCategory 是否已赋值
                     * @return ModelCategory 是否已赋值
                     * 
                     */
                    bool ModelCategoryHasBeenSet() const;

                    /**
                     * 获取Data source configurations.
                     * @return PublicDataSource Data source configurations.
                     * 
                     */
                    PublicDataSourceFS GetPublicDataSource() const;

                    /**
                     * 设置Data source configurations.
                     * @param _publicDataSource Data source configurations.
                     * 
                     */
                    void SetPublicDataSource(const PublicDataSourceFS& _publicDataSource);

                    /**
                     * 判断参数 PublicDataSource 是否已赋值
                     * @return PublicDataSource 是否已赋值
                     * 
                     */
                    bool PublicDataSourceHasBeenSet() const;

                private:

                    /**
                     * The model version ID is returned by the DescribeTrainingModelVersion API when querying the model.Enter the task ID of the Automated Machine Learning (AutoML) model.
                     */
                    std::string m_modelVersionId;
                    bool m_modelVersionIdHasBeenSet;

                    /**
                     * Model ID.
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Model version.
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * Model source.
                     */
                    std::string m_modelSource;
                    bool m_modelSourceHasBeenSet;

                    /**
                     * COS path information.
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                    /**
                     * GooseFSx configurations, and is valid when ModelSource is GooseFSx.
                     */
                    GooseFSx m_gooseFSx;
                    bool m_gooseFSxHasBeenSet;

                    /**
                     * Algorithm framework corresponding to the model (reserved field).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_algorithmFramework;
                    bool m_algorithmFrameworkHasBeenSet;

                    /**
                     * Default: NORMAL; accelerated model: ACCELERATE; automatic learning model: AUTO_ML.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * Model format.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modelFormat;
                    bool m_modelFormatHasBeenSet;

                    /**
                     * Whether it is a private LLM.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPrivateModel;
                    bool m_isPrivateModelHasBeenSet;

                    /**
                     * Model category. Valid values: MultiModal (multi-modal) and LLM (text LLM).
                     */
                    std::string m_modelCategory;
                    bool m_modelCategoryHasBeenSet;

                    /**
                     * Data source configurations.
                     */
                    PublicDataSourceFS m_publicDataSource;
                    bool m_publicDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODELINFO_H_
