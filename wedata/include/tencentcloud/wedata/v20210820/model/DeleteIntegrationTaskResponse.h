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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteIntegrationTask response structure.
                */
                class DeleteIntegrationTaskResponse : public AbstractModel
                {
                public:
                    DeleteIntegrationTaskResponse();
                    ~DeleteIntegrationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task Deletion Success or Failure Indicator
                     * @return Data Task Deletion Success or Failure Indicator
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Task Deletion Success or Failure Indicator
0 indicates deletion was successful
1 indicates failure, see DeleteErrInfo for the reason
100 indicates running or suspend task can't be deleted, the reason will also be written in DeleteErrInfo
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DeleteFlag Task Deletion Success or Failure Indicator
0 indicates deletion was successful
1 indicates failure, see DeleteErrInfo for the reason
100 indicates running or suspend task can't be deleted, the reason will also be written in DeleteErrInfo
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDeleteFlag() const;

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取Reason for Deletion Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DeleteErrInfo Reason for Deletion Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeleteErrInfo() const;

                    /**
                     * 判断参数 DeleteErrInfo 是否已赋值
                     * @return DeleteErrInfo 是否已赋值
                     * 
                     */
                    bool DeleteErrInfoHasBeenSet() const;

                private:

                    /**
                     * Task Deletion Success or Failure Indicator
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Task Deletion Success or Failure Indicator
0 indicates deletion was successful
1 indicates failure, see DeleteErrInfo for the reason
100 indicates running or suspend task can't be deleted, the reason will also be written in DeleteErrInfo
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * Reason for Deletion Failure
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_deleteErrInfo;
                    bool m_deleteErrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINTEGRATIONTASKRESPONSE_H_
