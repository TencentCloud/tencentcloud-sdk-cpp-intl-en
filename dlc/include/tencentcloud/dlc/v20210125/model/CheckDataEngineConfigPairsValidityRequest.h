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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckDataEngineConfigPairsValidity request structure.
                */
                class CheckDataEngineConfigPairsValidityRequest : public AbstractModel
                {
                public:
                    CheckDataEngineConfigPairsValidityRequest();
                    ~CheckDataEngineConfigPairsValidityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the minor version of the engine
                     * @return ChildImageVersionId ID of the minor version of the engine
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 设置ID of the minor version of the engine
                     * @param _childImageVersionId ID of the minor version of the engine
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
                     * 获取User-defined parameters
                     * @return DataEngineConfigPairs User-defined parameters
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置User-defined parameters
                     * @param _dataEngineConfigPairs User-defined parameters
                     * 
                     */
                    void SetDataEngineConfigPairs(const std::vector<DataEngineConfigPair>& _dataEngineConfigPairs);

                    /**
                     * 判断参数 DataEngineConfigPairs 是否已赋值
                     * @return DataEngineConfigPairs 是否已赋值
                     * 
                     */
                    bool DataEngineConfigPairsHasBeenSet() const;

                    /**
                     * 获取ID of the major version of the engine. If there is the ID of the minor version, only the ID of the minor version needs to be input. If not, the latest ID of the minor version under the major version will be acquired.
                     * @return ImageVersionId ID of the major version of the engine. If there is the ID of the minor version, only the ID of the minor version needs to be input. If not, the latest ID of the minor version under the major version will be acquired.
                     * 
                     */
                    std::string GetImageVersionId() const;

                    /**
                     * 设置ID of the major version of the engine. If there is the ID of the minor version, only the ID of the minor version needs to be input. If not, the latest ID of the minor version under the major version will be acquired.
                     * @param _imageVersionId ID of the major version of the engine. If there is the ID of the minor version, only the ID of the minor version needs to be input. If not, the latest ID of the minor version under the major version will be acquired.
                     * 
                     */
                    void SetImageVersionId(const std::string& _imageVersionId);

                    /**
                     * 判断参数 ImageVersionId 是否已赋值
                     * @return ImageVersionId 是否已赋值
                     * 
                     */
                    bool ImageVersionIdHasBeenSet() const;

                private:

                    /**
                     * ID of the minor version of the engine
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * User-defined parameters
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * ID of the major version of the engine. If there is the ID of the minor version, only the ID of the minor version needs to be input. If not, the latest ID of the minor version under the major version will be acquired.
                     */
                    std::string m_imageVersionId;
                    bool m_imageVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYREQUEST_H_
