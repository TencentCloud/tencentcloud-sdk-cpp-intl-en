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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTSELECTDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTSELECTDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListSelectDoc request structure.
                */
                class ListSelectDocRequest : public AbstractModel
                {
                public:
                    ListSelectDocRequest();
                    ~ListSelectDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Document name.

                     * @return FileName Document name.

                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Document name.

                     * @param _fileName Document name.

                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Document status: 7: under review; 8: review failed; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 20: expired.
                     * @return Status Document status: 7: under review; 8: review failed; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 20: expired.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Document status: 7: under review; 8: review failed; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 20: expired.
                     * @param _status Document status: 7: under review; 8: review failed; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 20: expired.
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Document name.

                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Document status: 7: under review; 8: review failed; 10: pending release; 11: releasing; 12: released; 13: learning; 14: learning failed; 20: expired.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTSELECTDOCREQUEST_H_
