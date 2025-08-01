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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteLogExport request structure.
                */
                class DeleteLogExportRequest : public AbstractModel
                {
                public:
                    DeleteLogExportRequest();
                    ~DeleteLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Log export ID
                     * @return ExportID Log export ID
                     * 
                     */
                    std::string GetExportID() const;

                    /**
                     * 设置Log export ID
                     * @param _exportID Log export ID
                     * 
                     */
                    void SetExportID(const std::string& _exportID);

                    /**
                     * 判断参数 ExportID 是否已赋值
                     * @return ExportID 是否已赋值
                     * 
                     */
                    bool ExportIDHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Log export ID
                     */
                    std::string m_exportID;
                    bool m_exportIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETELOGEXPORTREQUEST_H_
