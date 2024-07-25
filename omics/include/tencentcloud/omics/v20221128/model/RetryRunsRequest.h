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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RetryRuns request structure.
                */
                class RetryRunsRequest : public AbstractModel
                {
                public:
                    RetryRunsRequest();
                    ~RetryRunsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * @return ProjectId Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     * @param _projectId Project ID. (If you leave it blank, the default item in the specified region will be used.)
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
                     * 获取The run group ID that needs to be retried
                     * @return RunGroupId The run group ID that needs to be retried
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 设置The run group ID that needs to be retried
                     * @param _runGroupId The run group ID that needs to be retried
                     * 
                     */
                    void SetRunGroupId(const std::string& _runGroupId);

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                    /**
                     * 获取The run UUID that needs to be retried
                     * @return RunUuids The run UUID that needs to be retried
                     * 
                     */
                    std::vector<std::string> GetRunUuids() const;

                    /**
                     * 设置The run UUID that needs to be retried
                     * @param _runUuids The run UUID that needs to be retried
                     * 
                     */
                    void SetRunUuids(const std::vector<std::string>& _runUuids);

                    /**
                     * 判断参数 RunUuids 是否已赋值
                     * @return RunUuids 是否已赋值
                     * 
                     */
                    bool RunUuidsHasBeenSet() const;

                    /**
                     * 获取WDL running option. If you leave it blank, the retried run group running option will be used.
                     * @return WDLOption WDL running option. If you leave it blank, the retried run group running option will be used.
                     * 
                     */
                    RunOption GetWDLOption() const;

                    /**
                     * 设置WDL running option. If you leave it blank, the retried run group running option will be used.
                     * @param _wDLOption WDL running option. If you leave it blank, the retried run group running option will be used.
                     * 
                     */
                    void SetWDLOption(const RunOption& _wDLOption);

                    /**
                     * 判断参数 WDLOption 是否已赋值
                     * @return WDLOption 是否已赋值
                     * 
                     */
                    bool WDLOptionHasBeenSet() const;

                    /**
                     * 获取Nextflow running option. If you leave it blank, the retried run group running option will be used.
                     * @return NFOption Nextflow running option. If you leave it blank, the retried run group running option will be used.
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow running option. If you leave it blank, the retried run group running option will be used.
                     * @param _nFOption Nextflow running option. If you leave it blank, the retried run group running option will be used.
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                private:

                    /**
                     * Project ID. (If you leave it blank, the default item in the specified region will be used.)
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The run group ID that needs to be retried
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * The run UUID that needs to be retried
                     */
                    std::vector<std::string> m_runUuids;
                    bool m_runUuidsHasBeenSet;

                    /**
                     * WDL running option. If you leave it blank, the retried run group running option will be used.
                     */
                    RunOption m_wDLOption;
                    bool m_wDLOptionHasBeenSet;

                    /**
                     * Nextflow running option. If you leave it blank, the retried run group running option will be used.
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSREQUEST_H_
