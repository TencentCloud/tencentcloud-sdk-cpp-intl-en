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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Specific check item in this check step
                */
                class DetailCheckItem : public AbstractModel
                {
                public:
                    DetailCheckItem();
                    ~DetailCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item name, such as source database permission check.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckItemName Check item name, such as source database permission check.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCheckItemName() const;

                    /**
                     * 设置Check item name, such as source database permission check.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckItemName Check item name, such as source database permission check.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckItemName(const std::string& _checkItemName);

                    /**
                     * 判断参数 CheckItemName 是否已赋值
                     * @return CheckItemName 是否已赋值
                     */
                    bool CheckItemNameHasBeenSet() const;

                    /**
                     * 获取Check item details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Check item details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Check item details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Check item details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Check item result. Valid values: `pass` (pass); `failed` (failure); `warning` (pass with warning).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckResult Check item result. Valid values: `pass` (pass); `failed` (failure); `warning` (pass with warning).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置Check item result. Valid values: `pass` (pass); `failed` (failure); `warning` (pass with warning).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckResult Check item result. Valid values: `pass` (pass); `failed` (failure); `warning` (pass with warning).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取The cause of the check item failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailureReason The cause of the check item failure
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置The cause of the check item failure
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FailureReason The cause of the check item failure
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Execution error log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorLog Execution error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetErrorLog() const;

                    /**
                     * 设置Execution error log
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ErrorLog Execution error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrorLog(const std::vector<std::string>& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取URL of the detailed help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HelpDoc URL of the detailed help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetHelpDoc() const;

                    /**
                     * 设置URL of the detailed help document
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HelpDoc URL of the detailed help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHelpDoc(const std::vector<std::string>& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     */
                    bool HelpDocHasBeenSet() const;

                    /**
                     * 获取Prompt text for ignoring a risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkipInfo Prompt text for ignoring a risk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSkipInfo() const;

                    /**
                     * 设置Prompt text for ignoring a risk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SkipInfo Prompt text for ignoring a risk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSkipInfo(const std::string& _skipInfo);

                    /**
                     * 判断参数 SkipInfo 是否已赋值
                     * @return SkipInfo 是否已赋值
                     */
                    bool SkipInfoHasBeenSet() const;

                private:

                    /**
                     * Check item name, such as source database permission check.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkItemName;
                    bool m_checkItemNameHasBeenSet;

                    /**
                     * Check item details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Check item result. Valid values: `pass` (pass); `failed` (failure); `warning` (pass with warning).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * The cause of the check item failure
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Execution error log
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * URL of the detailed help document
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_helpDoc;
                    bool m_helpDocHasBeenSet;

                    /**
                     * Prompt text for ignoring a risk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_skipInfo;
                    bool m_skipInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DETAILCHECKITEM_H_
