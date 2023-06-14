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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGCONFIG_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Output mapping configuration
                */
                class OutputMappingConfig : public AbstractModel
                {
                public:
                    OutputMappingConfig();
                    ~OutputMappingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage type. Only `COS` is supported.
                     * @return Scene Storage type. Only `COS` is supported.
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Storage type. Only `COS` is supported.
                     * @param _scene Storage type. Only `COS` is supported.
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Number of concurrent workers
                     * @return WorkerNum Number of concurrent workers
                     * 
                     */
                    int64_t GetWorkerNum() const;

                    /**
                     * 设置Number of concurrent workers
                     * @param _workerNum Number of concurrent workers
                     * 
                     */
                    void SetWorkerNum(const int64_t& _workerNum);

                    /**
                     * 判断参数 WorkerNum 是否已赋值
                     * @return WorkerNum 是否已赋值
                     * 
                     */
                    bool WorkerNumHasBeenSet() const;

                    /**
                     * 获取Size of a worker part, in MB.
                     * @return WorkerPartSize Size of a worker part, in MB.
                     * 
                     */
                    int64_t GetWorkerPartSize() const;

                    /**
                     * 设置Size of a worker part, in MB.
                     * @param _workerPartSize Size of a worker part, in MB.
                     * 
                     */
                    void SetWorkerPartSize(const int64_t& _workerPartSize);

                    /**
                     * 判断参数 WorkerPartSize 是否已赋值
                     * @return WorkerPartSize 是否已赋值
                     * 
                     */
                    bool WorkerPartSizeHasBeenSet() const;

                private:

                    /**
                     * Storage type. Only `COS` is supported.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Number of concurrent workers
                     */
                    int64_t m_workerNum;
                    bool m_workerNumHasBeenSet;

                    /**
                     * Size of a worker part, in MB.
                     */
                    int64_t m_workerPartSize;
                    bool m_workerPartSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGCONFIG_H_
