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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunMetadataFile request structure.
                */
                class GetRunMetadataFileRequest : public AbstractModel
                {
                public:
                    GetRunMetadataFileRequest();
                    ~GetRunMetadataFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Run UUID
                     * @return RunUuid Run UUID
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置Run UUID
                     * @param _runUuid Run UUID
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @return ProjectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * @param _projectId Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取File names to be get

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * @return Key File names to be get

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置File names to be get

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * @param _key File names to be get

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取File names to be get in batch

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * @return Keys File names to be get in batch

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置File names to be get in batch

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * @param _keys File names to be get in batch

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * Run UUID
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * Project ID
(If you leave it blank, the default item in the specified region will be used.)
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * File names to be get

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * File names to be get in batch

The following files are supported by default:
- nextflow.log

When report is specified as true in NFOption during submission, the following files are additionally supported:
- execution_report.html
- execution_timeline.html
- execution_trace.txt
- pipeline_dag.html
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILEREQUEST_H_
