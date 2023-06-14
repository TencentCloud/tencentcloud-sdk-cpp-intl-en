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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Result of the whiteboard snapshot task.
                */
                class SnapshotResult : public AbstractModel
                {
                public:
                    SnapshotResult();
                    ~SnapshotResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task execution error code.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return ErrorCode Task execution error code.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置Task execution error code.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _errorCode Task execution error code.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Task execution error message.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return ErrorMessage Task execution error message.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Task execution error message.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _errorMessage Task execution error message.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Number of generated snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Total Number of generated snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置Number of generated snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _total Number of generated snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取List of URLs of the snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Snapshots List of URLs of the snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSnapshots() const;

                    /**
                     * 设置List of URLs of the snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @param _snapshots List of URLs of the snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshots(const std::vector<std::string>& _snapshots);

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                private:

                    /**
                     * Task execution error code.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Task execution error message.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Number of generated snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List of URLs of the snapshot images.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_snapshots;
                    bool m_snapshotsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTRESULT_H_
