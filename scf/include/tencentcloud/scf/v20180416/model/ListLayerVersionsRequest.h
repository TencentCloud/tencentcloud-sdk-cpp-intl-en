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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSREQUEST_H_

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
                * ListLayerVersions request structure.
                */
                class ListLayerVersionsRequest : public AbstractModel
                {
                public:
                    ListLayerVersionsRequest();
                    ~ListLayerVersionsRequest() = default;
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
                     * 获取Compatible runtimes
                     * @return CompatibleRuntime Compatible runtimes
                     * 
                     */
                    std::vector<std::string> GetCompatibleRuntime() const;

                    /**
                     * 设置Compatible runtimes
                     * @param _compatibleRuntime Compatible runtimes
                     * 
                     */
                    void SetCompatibleRuntime(const std::vector<std::string>& _compatibleRuntime);

                    /**
                     * 判断参数 CompatibleRuntime 是否已赋值
                     * @return CompatibleRuntime 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimeHasBeenSet() const;

                private:

                    /**
                     * Layer name
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * Compatible runtimes
                     */
                    std::vector<std::string> m_compatibleRuntime;
                    bool m_compatibleRuntimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERVERSIONSREQUEST_H_
