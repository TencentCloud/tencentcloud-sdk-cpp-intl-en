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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCETCRREPOSITORYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCETCRREPOSITORYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * TCR image repository configuration for reasoning.
                */
                class InferenceTCRRepositoryConfig : public AbstractModel
                {
                public:
                    InferenceTCRRepositoryConfig();
                    ~InferenceTCRRepositoryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>TCR service type. Valid values: <li>Personal: personal edition;</li><li>Enterprise: enterprise edition.</li></p>
                     * @return TCRType <p>TCR service type. Valid values: <li>Personal: personal edition;</li><li>Enterprise: enterprise edition.</li></p>
                     * 
                     */
                    std::string GetTCRType() const;

                    /**
                     * 设置<p>TCR service type. Valid values: <li>Personal: personal edition;</li><li>Enterprise: enterprise edition.</li></p>
                     * @param _tCRType <p>TCR service type. Valid values: <li>Personal: personal edition;</li><li>Enterprise: enterprise edition.</li></p>
                     * 
                     */
                    void SetTCRType(const std::string& _tCRType);

                    /**
                     * 判断参数 TCRType 是否已赋值
                     * @return TCRType 是否已赋值
                     * 
                     */
                    bool TCRTypeHasBeenSet() const;

                    /**
                     * 获取<p>Image address.</p>
                     * @return Image <p>Image address.</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>Image address.</p>
                     * @param _image <p>Image address.</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>ID of the repository instance. Required when TCRType = Enterprise.</p>
                     * @return RegistryId <p>ID of the repository instance. Required when TCRType = Enterprise.</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>ID of the repository instance. Required when TCRType = Enterprise.</p>
                     * @param _registryId <p>ID of the repository instance. Required when TCRType = Enterprise.</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Region name.</p>
                     * @return RegionName <p>Region name.</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region name.</p>
                     * @param _regionName <p>Region name.</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                private:

                    /**
                     * <p>TCR service type. Valid values: <li>Personal: personal edition;</li><li>Enterprise: enterprise edition.</li></p>
                     */
                    std::string m_tCRType;
                    bool m_tCRTypeHasBeenSet;

                    /**
                     * <p>Image address.</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>ID of the repository instance. Required when TCRType = Enterprise.</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Region name.</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCETCRREPOSITORYCONFIG_H_
