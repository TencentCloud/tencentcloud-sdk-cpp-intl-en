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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DELETELAYERVERSIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DELETELAYERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteLayerVersion request structure.
                */
                class DeleteLayerVersionRequest : public AbstractModel
                {
                public:
                    DeleteLayerVersionRequest();
                    ~DeleteLayerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Layer name
                     * @return LayerName Layer name
                     * 
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置Layer name
                     * @param _layerName Layer name
                     * 
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     * 
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取Version number
                     * @return LayerVersion Version number
                     * 
                     */
                    int64_t GetLayerVersion() const;

                    /**
                     * 设置Version number
                     * @param _layerVersion Version number
                     * 
                     */
                    void SetLayerVersion(const int64_t& _layerVersion);

                    /**
                     * 判断参数 LayerVersion 是否已赋值
                     * @return LayerVersion 是否已赋值
                     * 
                     */
                    bool LayerVersionHasBeenSet() const;

                private:

                    /**
                     * Layer name
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * Version number
                     */
                    int64_t m_layerVersion;
                    bool m_layerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DELETELAYERVERSIONREQUEST_H_
